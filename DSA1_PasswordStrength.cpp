#include <bits/stdc++.h>                                                                                                                                                                                      //Logm
using namespace std;
#define int long long

bool isValidPassword(const string &password) {
    unordered_set<char> invalidChars = {'.', '\\', '/', ' ', ','};
    if (password.length() < 8) return false;
    for (char c : password) {
        if (invalidChars.count(c)) return false;
    }
    return true;
}

int calculateScore(const string &password) {
    const int BaseScore = 40, Bonus_Excess = 3, Bonus_Upper = 4, Bonus_Number = 5, Bonus_Symbols = 5;
    int Num_Upper = 0, Num_Numbers = 0, Num_Symbols = 0, Num_Excess = password.length() - 8;
    unordered_set<char> specialChars = {'!', '@', '#', '$', '%', '^', '&', '*', '?', '_', '~'};
    
    int allnum = -35;
    int alllower = -15;
    for (char c : password) {
        if (isupper(c)) Num_Upper++;
        else if (isdigit(c)) Num_Numbers++;
        else if (specialChars.count(c)) Num_Symbols++;

        if (!isdigit(c)) allnum = 0;
        if (!('a' <= c && c <= 'z')) alllower = 0;
    }
    
    int score = BaseScore + (Num_Excess * Bonus_Excess) + (Num_Upper * Bonus_Upper) +
                (Num_Numbers * Bonus_Number) + (Num_Symbols * Bonus_Symbols);
    
    bool hasUpper = Num_Upper > 0, hasNumber = Num_Numbers > 0, hasSymbol = Num_Symbols > 0;
    
    if (hasUpper + hasNumber + hasSymbol == 3) score += 25;
    else if (hasUpper + hasNumber + hasSymbol == 2) score += 15;
    
    score += allnum + alllower;
    
    return score;
}

string evaluateStrength(int score) {
    if (score < 50) return "Yeu";
    else if (score < 75) return "Vua";
    else if (score < 100) return "Manh";
    return "RatManh";
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if (fopen("_ab.inp", "r")) {
        freopen("_ab.inp", "r", stdin);
        freopen("_ab.out", "w", stdout);
    }

    string password;
    getline(cin, password);
    
    if (!isValidPassword(password)) {
        cout << "KhongHopLe" << endl;
        return 0;
    }
    
    int score = calculateScore(password);
    cout << evaluateStrength(score) << endl;
    
    return 0;
}