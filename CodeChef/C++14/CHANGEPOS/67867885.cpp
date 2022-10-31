#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x1,x2,y1,y2;
	    cin>>x1>>y1>>x2>>y2;
	    if((x1==x2)&&(y1==y2)) cout<<0;
	    else if((x1!=x2)&&(y1!=y2)) cout<<1;
	    else cout<<2;
	    cout<<endl;
	}
	return 0;
}
