#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    y-x<0?cout<<0:cout<<y-x;
	    cout<<endl;
	}
	return 0;
}
