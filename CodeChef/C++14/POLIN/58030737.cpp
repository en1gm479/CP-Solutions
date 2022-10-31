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
      int n;
      cin>>n;
      unordered_set<int> s1,s2;
      rof(0,n,1){
         int a,b;
         cin>>a>>b;
         s1.insert(a);
         s2.insert(b);
      }
      cout<<s1.size()+s2.size()<<endl;
   }

}

