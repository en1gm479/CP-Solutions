#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(ll i=a;i<b;i+=count)
#define trav(a, x)  for(auto& a : x)
#define display(x) trav(a,x) cout<<a<<" ";cout<<endl;
#define test() int t; cin>>t; while(t--)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long int
const unsigned int mod = 1000000007;

bool chk(int n){
   string s=to_string(n);
   for(int i=0;i<s.size();i++){
      if(s[i]!=s[0])
         return false;
   }
   return true;
}

int main(){
   IOS;
   int t;
   cin>>t;
   while(t--){
      int n,nos = 0;
      cin>>n;
      string s;
      cin>>s;
      rof(0,n,1){
         // cout<<s[i];
         if(s[i]==s[i+1])
            i++;
            nos++;
      }
      cout<<nos<<endl;
   }
   return 0;
}

