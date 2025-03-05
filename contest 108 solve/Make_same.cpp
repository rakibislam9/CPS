#include <bits/stdc++.h>
using namespace std;

int min_operations(string S1, string S2, string S3, int N) {
    int count0 = 0, count1 = 0, count2 = 0, count3 = 0;

    for (int i = 0; i < N; i++) {
        int ones = (S1[i] == '0') + (S2[i] == '0') + (S3[i] == '0');
        if (ones == 0) count0++; 
        else if (ones == 1) count1++; 
        else if (ones == 2) count2++; 
        else count3++; 
    }

    if (count0 == N || count3 == N) return 0;

    
    if (count1 + count2 == N) return -1;
    // if (count1 - count2 == N) return 1;
    return min(count1, count2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S1, S2, S3;
        cin >> S1 >> S2 >> S3;
        cout << min_operations(S1, S2, S3, N) << endl;
    }
    
    return 0;
}
