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
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    int ct=0;
    ((x==a)||(x==b))?ct++:ct;
    ((y==a)||(y==b))?ct++:ct;
    cout<<2-ct<<endl;

  }
  return 0;
}

