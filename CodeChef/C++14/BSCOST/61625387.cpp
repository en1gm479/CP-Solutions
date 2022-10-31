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
  test(){
    int n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    bool ct0=false,ct1=false;
    rof(0,n,1){
      if(s[i]=='0') ct0=true;
      if(s[i]=='1') ct1=true;

    }
    if(ct1&&ct0)
      cout<<min(x,y);
    else cout<<0;
    cout<<endl;

  }
  return 0;
}

