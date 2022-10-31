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
   		string s;
   		int n,k,ct=0;
   		cin>>n>>k;
   		cin>>s;
   		rof(0,n/2,1){
   			if(s[_i]!=s[s.size()-1-_i]) ct++;
   		}
   	// 	cout<<ct<<endl;
   		if(ct<=k){
   		    if(n%2==0){
   		    if((k-ct)%2==0) cout<<"Yes"<<endl;
   		    else cout<<"No"<<endl;
   		    }
   		    else
   		    cout<<"Yes"<<endl;
   		}
   		else
   		cout<<"No"<<endl;
   }

   return 0;
}

