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
    vector<int> v;
    if(s[0]=='1') v.push_back(0+1);
    rof(1,n,1){
      if(s[i]!=s[i-1]) v.push_back(i+1);
    }
    cout<<v.size()<<endl;;
    for(auto it:v){
      cout<<it<<" "<<(n-it+1)<<" ";
    }
    cout<<endl;


  }
  return 0;
}

