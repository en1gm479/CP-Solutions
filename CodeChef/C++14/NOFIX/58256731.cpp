#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(ll i=a;i<b;i+=count)
#define trav(a, x)  for(auto& a : x)
#define display(x) trav(a,x) cout<<a<<" ";cout<<endl;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long int
const unsigned int mod = 1000000007;


int main(){
   IOS;
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int a[n];
      rof(0,n,1) cin>>a[i];
      int ct=0,i=0,x=1;
         for(;i<n;i++)
         {
            if(a[i]==i+x)
               {ct++;x++;}
         }
         cout<<ct<<endl;
   }

}

