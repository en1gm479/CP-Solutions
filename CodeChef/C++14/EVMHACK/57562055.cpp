#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;


int main(){
	IOS;
	int t;
	cin>>t;
	while(t--){
		int a,b,c,p,q,r;
		cin>>a>>b>>c>>p>>q>>r;
		float win = (p+q+r)/2.0;
		// cout<<win;
		bool flag = false;
		if(p+b+c>win) flag = true;
		else if(a+q+c>win) flag = true;
		else if(a+b+r>win) flag = true;
		if(flag) cout<<"YES";
		else cout<<"NO";
		cout<<endl;

	}
	return 0;
}

