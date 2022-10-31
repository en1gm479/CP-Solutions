#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL _i=a;_i<b;_i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;

LL fact(int n){
	LL f = 1;
	if(n==0||n==1) return 1;
	else{
		rof(1,n+1,1)
			f*=_i*1ll;
		return f;
	}
}

int main(){
   IOS;
   int t;
   cin>>t;
   while(t--){
   		string s;
   		cin>>s;
   		map<char,int> mpp;
   		rof(0,s.size(),1){
   			mpp[tolower(s[_i])]++;
   		}
   		LL res = fact(s.size());
   		for(auto it:mpp){
   			res=(res*1ll)/fact(it.second);
   		}
   		cout<<res<<endl;


   }

   return 0;
}