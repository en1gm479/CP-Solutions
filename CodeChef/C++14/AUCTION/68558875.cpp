#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    (a>b&&a>c)?cout<<"ALICE":((b>a&&b>c)?cout<<"BOB":cout<<"CHARLIE");
	    cout<<endl;
	}
	return 0;
}
