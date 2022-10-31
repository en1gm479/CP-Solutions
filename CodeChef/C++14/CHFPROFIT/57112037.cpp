#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		int pf = z-y;
		cout<<pf*x<<endl;

	}
	return 0;
}