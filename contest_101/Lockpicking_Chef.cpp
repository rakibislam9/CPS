#include <bits/stdc++.h>
using namespace std;

int minMovesToUnlock(string S, string K) {
    int N = S.size(), M = K.size();
    int min_moves = INT_MAX;
    
    for (int i = 0; i <= N - M; i++) {
        int moves = 0;
        for (int j = 0; j < M; j++) {
            int digitS = S[i + j] ;
            int digitK = K[j] ;
            int diff1 = abs(digitS - digitK);
            int diff2 = 10 - diff1; 
            moves += min(diff1, diff2);
        }
        min_moves = min(min_moves, moves);
    }
    
    return min_moves;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        string S, K;
        cin >> S >> K;
        
        cout << minMovesToUnlock(S, K) << "\n";
    }
    return 0;
}
