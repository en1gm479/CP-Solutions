#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   long long a,b;
	   cin>>a>>b;
	   long long diff = b-a;
	   if(b%a==0) cout<<"YES";
	   else if(diff-a<0) cout<<"NO";
	   else{
	       b=diff-a+b;
	       a=diff;
	       if(b%a==0) cout<<"YES";
	       else cout<<"NO";
	       
	   }
	   cout<<endl;
	}
	return 0;
}
