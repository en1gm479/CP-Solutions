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
    int n,m;
    cin>>n>>m;
    if(n%4==0){
        if(m)cout<<"On";
      else cout<<"Off";
    }
    else if(m==0){
      if(n%4==0) cout<<"Off";
      else cout<<"On";
    }
    else if(n==0){
      if(m)cout<<"On";
      else cout<<"Off";
    }
    else cout<<"Ambiguous";
    cout<<endl;
    
 
  }
  return 0;
}
 