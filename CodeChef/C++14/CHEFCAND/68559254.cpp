#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(n<=x) cout<<0;
	    else{
	        int rem = n-x;
	        rem%4==0?cout<<rem/4:cout<<(rem/4)+1;
	    }
	    cout<<endl;
	}
	return 0;
}
