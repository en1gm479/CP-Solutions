#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int x = b-a;
	    if(x%3==2) cout<<"NO";
	    else cout<<"YES";
	    cout<<endl;
	}
	return 0;
}
