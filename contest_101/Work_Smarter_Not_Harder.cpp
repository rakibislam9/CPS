#include<bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int L, V1, V2;
        cin >> L >> V1 >> V2;
        
        int time_tortoise = (L + V1 - 1) / V1;
        
        double time_hare_exact = (double)L / V2;
        int time_hare = ceil(time_hare_exact);
        
        int max_wait_time = time_tortoise - time_hare;
        
        if (max_wait_time >= 0) {
            cout << max_wait_time - 1 << "\n";
        } else {
            cout << "-1\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
