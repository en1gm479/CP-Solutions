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
   string s;
   cin>>s;
   int ct1=0,tc1=0,ct0=0;
   bool flag = true;
   rof(0,s.size(),1){
   		if(s[i]=='0'){ ct0++;tc1--;}
   		else {ct1++;tc1++;}
   		if(ct1<ct0) flag=false;
   }
   if(flag&&tc1==0)cout<<"yes"<<endl;
   else cout<<"no"<<endl;
   }

   return 0;
}