#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(ll i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long int
const unsigned int mod = 1000000007;
 
 
int main(){
   IOS;
   int x=0,y,k,n;
   cin>>y>>k>>n;
   x=k-(y%k);
   if(x+y>n)cout<<(-1);
   else
   {  
      while((x+y)<=n){
         cout<<x<<" ";
         x+=k;
      }
   }
      
}
 