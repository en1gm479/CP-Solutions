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


int main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
    string s1,s2,res;
    cin>>s1>>s2;
    rof(0,s1.size(),1){
      if(s1[i]==s2[i])
        res.push_back('G');
      else res.push_back('B');
    }
    cout<<res<<endl;

  }
  return 0;
}

