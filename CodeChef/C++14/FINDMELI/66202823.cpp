#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int a;
	bool chk=false;
	for(int i=0;i<n;i++){
	    cin>>a;
	    if(a==k) chk=true;
	}
	if(chk)cout<<1;
	else cout<<-1;
	return 0;
}
