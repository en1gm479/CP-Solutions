#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,x;
	    cin>>a>>b>>x;
	    if((abs(a-b))%(2*x)==0) cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
