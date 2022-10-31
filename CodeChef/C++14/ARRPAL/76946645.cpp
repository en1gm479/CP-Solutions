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
    int n;
    cin>>n;
    vector<int> a(n);
    rof(0,n,1) cin>>a[i];

    bool chk=1;
    int ct=0;
    for(int i=n/2-1;i>=0;i--){
      if(a[i]+ct>a[n-i-1]) {
        chk=0;break;
      }
      else{
        ct=a[n-1-i]-a[i];
      }
    }
    if(!chk) cout<<-1;
    else cout<<ct;

    cout<<endl;
  }
  return 0;
}
 