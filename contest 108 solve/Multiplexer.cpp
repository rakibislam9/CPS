#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int maxFrequency(vector<int>& A, int X) {
    unordered_map<int, int> freq;
    int max_freq = 0;

    // Calculate frequency of each number in A
    for (int num : A) {
        freq[num]++;
        max_freq = max(max_freq, freq[num]);
    }

    // Update frequency of transformed numbers
    for (int num : A) {
        int new_val = num * X;
        if (freq.find(new_val) != freq.end()) {
            max_freq = max(max_freq, freq[new_val]);
        }
    }

    return max_freq;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        cout << maxFrequency(A, X) << endl;
    }
    return 0;
}
