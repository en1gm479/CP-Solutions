#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int minb = (k*(k+1))/2;
	    if(minb<=n) cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
