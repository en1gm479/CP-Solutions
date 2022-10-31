#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   string s;
	   cin>>s;
	   if(n&1) cout<<"YES";
	   else{
	       int ct1=0,ct0=0;
	       for(int i=0;i<n;i++){
	           if(s[i]=='0') ct0++;
	           else ct1++;
	       }
	       if(ct1%2==0) cout<<"YES";
	       else{
	           cout<<"NO";
	       }
	   }
	   cout<<endl;
	}
	return 0;
}
