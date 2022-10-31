#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;


int main(){
  int t;
  cin>>t;
  while(t--){
   int tot,inf,norm,ct=0;
   cin>>tot>>inf;
   norm = tot-inf;
   ct+=norm;
   ct+=(inf*2);
   if(norm==0)
      ct--;
   if(norm==0&&inf==0)ct=0;
   cout<<ct<<endl;
  }
}