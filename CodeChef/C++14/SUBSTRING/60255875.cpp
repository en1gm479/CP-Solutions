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
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int maxlen=0;
    rof(1,s.size()-1,1){
      int len=0;
      while(s[i]!=s[0]&&s[i]!=s[s.size()-1]){
        len++;
        i++;
      }
      maxlen=max(maxlen,len);
    }
    maxlen==0?maxlen--:maxlen;
    cout<<maxlen<<endl;
  }
  return 0;
}

