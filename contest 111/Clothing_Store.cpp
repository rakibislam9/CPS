#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, Z, A, B, C;
        cin >> X >> Y >> Z >> A >> B >> C;
        
        int happy = 0;
        
        int fulfill_S = min(X, A);
        X -= fulfill_S;
        A -= fulfill_S;
        happy += fulfill_S;
        
        int fulfill_L = min(Y, B);
        Y -= fulfill_L;
        B -= fulfill_L;
        happy += fulfill_L;
        
        int fulfill_XL = min(Z, C);
        Z -= fulfill_XL;
        C -= fulfill_XL;
        happy += fulfill_XL;
        
        int convert_XL_to_L = min(Z, B);
        Z -= convert_XL_to_L;
        B -= convert_XL_to_L;
        happy += convert_XL_to_L;
        
        int convert_XL_to_S = min(Z, A);
        Z -= convert_XL_to_S;
        A -= convert_XL_to_S;
        happy += convert_XL_to_S;
        
        int convert_L_to_S = min(Y, A);
        Y -= convert_L_to_S;
        A -= convert_L_to_S;
        happy += convert_L_to_S;
        
        cout << happy << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}