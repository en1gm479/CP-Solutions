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
    string s;
    cin>>s;
    int ct0=0,ct1=0,ct=0;
    bool chk=0;

    rof(0,n,1){
      s[i]=='0'?ct0++:ct1++;
      if(i==0)continue;
      if(s[i-1]=='1'&&s[i]=='0') ct++;
    }
    if(ct0==0||ct1==0) cout<<0;
    else cout<<ct;
    cout<<endl;
  }


  return 0;
}