#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    if(n>=(x+y*2)) cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
