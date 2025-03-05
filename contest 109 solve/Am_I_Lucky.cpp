#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,n,k;
	    cin >> x >> n >> k;
	    
	    int gril = x - n;
	    
	    int bremaing = n % k;
	    int gremaing = gril % k;
	    
	    cout <<  abs(gremaing - bremaing) << endl;
	}

}
