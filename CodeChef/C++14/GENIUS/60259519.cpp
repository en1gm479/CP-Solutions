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
    int n,x;
    cin>>n>>x;
    if(x%3==0&&x/3<=n){
      cout<<"YES"<<endl;
      cout<<x/3<<" "<<0<<" "<<n-(x/3);
    }
    else if(x%3==1&&(x/3+3)<=n){
      cout<<"YES"<<endl;
      cout<<x/3+1<<" "<<2<<" "<<n-(x/3+3);
    }
    else if(x%3==2&&(x/3+2)<=n){
      cout<<"YES"<<endl;
      cout<<x/3+1<<" "<<1<<" "<<n-(x/3+2);
    }
    else cout<<"NO";
    cout<<endl;

  }
  return 0;
}

