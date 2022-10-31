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
    string s;
    cin>>s;
    set<char> st={'a','e','i','o','u'};
    int gct=0,lct=0;
    for(int i=0;i<s.size();i++){
      if(st.find(s[i])!=st.end()) lct++;
      else lct=0;
      gct=max(gct,lct);
    }
    gct>2?cout<<"HAPPY":cout<<"SAD";
    cout<<endl;
    }

  return 0;
}
 