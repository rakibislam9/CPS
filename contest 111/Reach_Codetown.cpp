#include <bits/stdc++.h>
using namespace std;

#define VOWELS "AEIOU"

bool isVowel(char c) {
    return strchr(VOWELS, c) != nullptr;
}

bool canTransform(const string &s1, const string &s2) {
    for (int i = 0; i < 8; i++) {
        if ((isVowel(s1[i]) && !isVowel(s2[i])) || (!isVowel(s1[i]) && isVowel(s2[i]))) {
            return false;
        }
    }
    return true;
}

void solve() {
    int T;
    cin >> T;
    string target = "CODETOWN";
    
    while (T--) {
        string S;
        cin >> S;
        cout << (canTransform(S, target) ? "YES" : "NO") << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
