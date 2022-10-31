#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		int res = 3*x;
		cout<<x<<" ";
		cout<<1<<" "<<(3*x-x)-1;
		cout<<endl;
	}
	return 0;
}