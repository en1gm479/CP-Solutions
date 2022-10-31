#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;
	
	int t;
	cin>>t;
	while(t--){
		bool flag=false;
		int n;
		cin>>n;
		rof(0,n,1){
			int a;
			cin>>a;
			if(a==1) {flag=true;}
		}
		if(flag) cout<<"HARD"<<endl;
		else cout<<"EASY"<<endl;
	}
	return 0;
}

