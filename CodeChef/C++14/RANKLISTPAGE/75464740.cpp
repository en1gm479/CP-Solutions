#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x%25==0) cout<<x/25;
	    else
	    cout<<(x/25)+1;
	    cout<<endl;
	}
	return 0;
}
