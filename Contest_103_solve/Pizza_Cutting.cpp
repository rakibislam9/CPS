#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin >> n;
	while(n--){
	    int pizza;
	    cin >> pizza;
	    
	    if(pizza % 2 == 0 || pizza == 1){
	        cout << "YES" << endl;
	    }else{
	         cout << "NO" << endl;
	    }
	}

}
