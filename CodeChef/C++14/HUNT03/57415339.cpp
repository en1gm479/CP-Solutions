#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"

int main(){
	IOS;
	
	int curr=1,n,m,t=0;
	cin>>n>>m;
	rof(0,m,1){
		int k;
		cin>>k;
		if(k-curr>=0){
			t+=k-curr;
			curr=k;
		}
		else{
			t=t+n-curr+k;
			curr=k;
		}
	}
	cout<<t;
	return 0;
}
