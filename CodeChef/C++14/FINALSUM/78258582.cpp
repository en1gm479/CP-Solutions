#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n,q;
	   cin>>n>>q;
	   int sum=0;
	   for(int i=0;i<n;i++){
	       int a;
	       cin>>a;
	       sum+=a;
	   }
	   int ct=0;
	   while(q--){
	       int l,r;
	       cin>>l>>r;
	       if((l-r)%2==0) ct++;
	   }
	   sum+=ct;
	   cout<<sum<<endl;
	}
	return 0;
}
