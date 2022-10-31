#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int x,y;
	   cin>>x>>y;
	   if(x%y==0) cout<<x/y;
	   else{
	       int a = x/y;
	       int rem = x-(a*y);
	       cout<<a+rem;
	   }
	   cout<<endl;
	}
	return 0;
}
