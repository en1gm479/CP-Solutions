#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if(n==m) cout<<"ANY";
	    else if(n<m) cout<<"REPAIR";
	    else cout<<"NEW PHONE";
	    cout<<endl;
	}
	return 0;
}
