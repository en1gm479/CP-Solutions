#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	 int a,b,c;
	 cin>>a>>b>>c;
	 if(a>=10&&b>=10&&c>=10&&(a+b+c)>=100) cout<<"PASS";
	 else cout<<"FAIL";
	 cout<<endl;
	}
	return 0;
}
