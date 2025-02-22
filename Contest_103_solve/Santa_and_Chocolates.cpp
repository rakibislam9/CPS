#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int N,K;
	    cin >> N >> K;
	    
	    vector<int> M(N);
	    for(int i=0; i<N; i++){
	        cin >> M[i];
	    }
	    
	    int choc = 0;
	    
	    for(int i=0;i<N; i++){
	        choc += M[i];
	    }
	    if(choc < N){
			cout << "NO" <<endl;
		}
	    else if( K >= 1 || choc % N == 0){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" <<endl;
	    }
	}

}
