#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;
	
	string s;
	cin>>s;
	int ct0=0,ct1=0;
	rof(0,s.size(),1){
		if(s[i]=='(')ct0++;
		else ct1++;
	}
	cout<<min(ct1,ct0);
	return 0;
}
