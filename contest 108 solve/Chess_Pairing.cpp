#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n,x;
        cin>>n>>x;
        int ans=0;
        if(2*n==x){
            ans=x;
        }
        else if(x>n){
            int p=2*n-x;
            ans=-(p-x);
        }
        cout<<ans<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    return 0;
}