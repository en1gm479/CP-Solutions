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
  test()
  {
    int n,k;
    cin>>n>>k;
    int a[n];
    rof(0,n,1) cin>>a[i];
    int ct=0,sum=0;
    sort(a,a+n);
    while(((sum+a[ct])<=k)&&(ct<n)){
      sum+=a[ct];
      ct++;
    }
    if(((sum+(round(a[ct]/2.0)))<=k)&&(ct<n))
     { 
      sum+=(round(a[ct]/2.0));
      ct++;
    }
    n<=ct?cout<<n:cout<<ct;
    cout<<endl;
  }
  return 0;
}

