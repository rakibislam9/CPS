#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int sp1 = 0; 

        for(int num : s){
            sp1[num]'1';
        }

        cout << sp1<< endl;

    }
    return 0;
}