#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    int x,p;
	    cin >> x >> p;
	    
	    int air = p / 100;
	    
	    if( x > air){
	        cout << 0 << endl;
	    }else if(p % 100 == 0){
	        cout << air - x << endl;
	    }else{
	       cout <<( air - x ) + 1 << endl;
	    }
	}

}