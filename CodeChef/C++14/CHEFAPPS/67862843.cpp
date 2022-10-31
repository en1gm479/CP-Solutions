#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int s,x,y,z;
	    cin>>s>>x>>y>>z;
	    int fr = s-(x+y);
	   // cout<<fr<<" ";
	    if(x+y+z<=s) cout<<0;
	    else if(fr+max(x,y)>=z) cout<<1 ;
	    else cout<<2;
	    cout<<endl;
	}
	return 0;
}
