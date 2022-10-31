#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a;
	    cin>>n;
	    vector<int> A(n+1,1),C(n+1);
	    for(int i=1;i<n+1;i++) 
	    {
	        cin>>a;
	        C[i] = (a);
	    }
	    
	    int k;
	    cin>>k;
	    vector<int> B;
	    for(int i=0;i<k;i++) 
	    {
	        cin>>a;
	        A[a]=0;
	    }
	    A[0] = 0;
	    for(int i=1;i<n+1;i++){
	        if(A[C[i]]==1) cout<<(C[i])<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
