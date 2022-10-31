#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(ll i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long int
const unsigned int mod = 1000000007;


int main(){
   IOS;
   int t;
   cin>>t;
   while(t--){
      int x;
      cin>>x;
      ll m;
      cin>>m;
      int tot_height=0,ct=0;
      while(tot_height<x){
         ct++;
         if(tot_height==0)
            tot_height=1;
         else
         tot_height*=2;
      }
      // cout<<ct<<" ";
      if(ct>m)
         cout<<0<<endl;
      else
         cout<<(abs(m-ct)+1)<<endl;
   }

}

