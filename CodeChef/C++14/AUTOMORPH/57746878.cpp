#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL _i=a;_i<b;_i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;


int main(){
   IOS;
   int t;
   cin>>t;
   while(t--){
   		int n;
   		cin>>n;
   		string sn=to_string(n);
		string sq = to_string(n*n);
		int i = sn.size()-1;
   		int j=sq.size()-1;
   		// cout<<(sn[i]==sq[j])<<endl;
   		bool flag = true;
   		rof(0,sn.size(),1){
   			if((sn[i]!=sq[j])) flag=false;
   			i--;
   			j--;
   		}
   		if(flag) cout<<1<<endl;
   		else cout<<0<<endl;

   }

   return 0;
}