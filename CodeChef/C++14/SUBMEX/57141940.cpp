#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		int n,k,x;
		cin>>n>>k>>x;
		if(x>k) cout<<(-1);
		else{
			int j=0;
			rof(0,n,1){
				cout<<j++<<" ";
				if((i+1)%k==0 || x==j)
					j=0;
			}
		}
		cout<<endl;
	}
	return 0;
}