#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    
	    int Allstudend = x * y;
	    
	    int passher = Allstudend / 2;
	    
	    if(passher < z){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" <<endl;
	    }
	}

}
