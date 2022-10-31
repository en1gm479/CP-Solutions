#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int y = x%3;
	    y==0?cout<<0:cout<<3-y;
	    cout<<endl;
	}
	return 0;
}
