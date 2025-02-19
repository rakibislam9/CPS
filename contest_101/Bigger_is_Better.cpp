#include <bits/stdc++.h>
using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;

    while (T--) {
        int N;
        string A;
        cin >> N >> A;

        if(A == string(N,'z')){
            cout << -1 << endl;
        }else{
            for(int i=0; i < A.size() ; i++){
            cout << "z" ;
        }
        cout << endl;
        }
        
        
    }

    return 0;
}
