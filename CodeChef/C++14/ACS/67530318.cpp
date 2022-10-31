#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p;
	    cin>>p;
	    int tot=p/100+p%100;
	    if(tot>10) cout<<-1;
	    else cout<<tot;
	    cout<<endl;
	}
	return 0;
}
