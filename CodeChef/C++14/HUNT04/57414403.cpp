#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;
	
	string s;
	cin>>s;
	int ct=0;
	rof(0,s.size(),1){
		if(s[i]=='h'&&ct==0)ct=1;
		else if(s[i]=='e'&&ct==1)ct=2;
		else if(s[i]=='l'&&ct==2)ct=3;
		else if(s[i]=='l'&&ct==3)ct=4;
		else if(s[i]=='o'&&ct==4)ct=5;
	}
	ct==5?cout<<"YES":cout<<"NO";
	return 0;
}
