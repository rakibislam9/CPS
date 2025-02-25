#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    
	    int day = 1440;
	    
	    if(x*y <= day * z){
	        cout << "YES" << endl;
	        
	    }else{
	        cout << "NO" << endl;
	    }
	}

}
