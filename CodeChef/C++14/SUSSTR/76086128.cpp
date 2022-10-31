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

map<int,int> factor(int a){
  map<int,int> fact;
  int i=2;
  while(a&&a!=1){
    if(a%i==0){
      fact[i]++;
      a/=i;
    }
    else i++;
  }
  return fact;
}

int main(){
  IOS;
  // cout<<"df0";
  test(){
    int n;
    cin>>n;
    string s,t;
    cin>>s;
    // cout<<s<<endl;
    int l=0,r=n-1;
    while(l<r){
      if(s[l]=='0') t='0'+t;
      else t=t+'1';
      l++;
      // if(l==r)break;
       if(s[r]=='0') t=t+'0';
       else t='1'+t;
       r--;
    }
    if(n&1) 
    {l=n/2;
    if(s[l]=='0') t='0'+t;
        else t=t+'1';}
  cout<<t<<endl;
  }

  return 0;
}
 