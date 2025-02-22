#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;

        vector<int> M(n);

        for(int i=0; i<n; i++){
            cin >> M[i];
        }

        int mininumber = 8;

        for(int i=0; i<n; i++){

            if( M[i] <= mininumber){
                cout << 8 <<"";
            }else if(M[i] % mininumber == 0){
                cout << M[i] << "";

            }else {
                
            }
            cout << endl;
        }
    }
    return 0;
}