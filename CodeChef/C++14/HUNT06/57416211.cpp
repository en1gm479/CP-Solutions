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
		int x,y,k;
		cin>>x>>y>>k;
		int tot = 1*(x-1)+x*(y-1);
		// cout<<tot<<" ";
		tot==k?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}

