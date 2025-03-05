#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> donuts(N);
        for (int i = 0; i < N; i++) {
            cin >> donuts[i];
        }

        vector<int> customers(M);
        for (int i = 0; i < M; i++) {
            cin >> customers[i];
        }
        int sadCustomers = 0;

        for (int i = 0; i < M; i++) {
            int donutType = customers[i] - 1;
            if (donuts[donutType] > 0) {
             
                donuts[donutType]--;
            } else {
                sadCustomers++;
            }
        }
        cout << sadCustomers << endl;
    }

    return 0;
}