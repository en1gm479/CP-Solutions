#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(ll i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long int
const unsigned int mod = 1000000007;


int main(){
   IOS;
   int t;
   cin>>t;
   while(t--){
      int x;
      cin>>x;
      ll y=0;
      rof(0,x,1)
      {
         int a;
         cin>>a;
         y^=a;
      }
      if(y%2==0) cout<<1<<endl;
      else cout<<2<<endl;
   }

}

