#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n,x,y;
	   cin>>n>>x>>y;
	   if(y%x==0&&n*x>=y) cout<<"YES";
	   else cout<<"NO";
	   cout<<endl;
	}
	return 0;
}
