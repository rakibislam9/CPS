#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    
	    int A[3], B[3];
	    
	    for(int i=0; i<3; i++){
	        cin >> A[i];
	    }
	    
	    for(int i=0; i<3; i++){
	        cin >> B[i];
	    }
	    
	    sort(A, A + 3, greater<int>());
	    sort(B, B + 3, greater<int>());                                                                                                                        
	    
	    int Alice = 0, Bob = 0;                                                      
	    
	    for(int i=0; i<3; i++){
	        Alice = Alice*10 + A[i];
	        Bob = Bob * 10 + B[i];
	    }
	                                                                          

	    
	    if( Alice > Bob){
	        cout << "Alice" << endl;
	    }else if(Alice == Bob){
	        cout << "Tie" << endl;
	    }else{
	        cout << "Bob" << endl;
	    }
	}

}
