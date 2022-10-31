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
    int n,ct=0;
    string s;
    cin>>n>>s;
    rof(0,n,1){
      string s1;
      cin>>s1;
      if(s1=="CONTEST_WON"){
        int x;
        cin>>x;
        if(x>20)
        ct+=300;
        else 
        ct+=300+(20-x);
      }
      else if(s1=="BUG_FOUND"){
        int x;
        cin>>x;
        ct+=x;
      }
      else if(s1=="TOP_CONTRIBUTOR") ct+=300;
      else if(s1=="CONTEST_HOSTED") ct+=50;

    }
    if(s=="INDIAN") cout<<ct/200<<endl;
    else cout<<ct/400<<endl;
  }
  return 0;
}
 