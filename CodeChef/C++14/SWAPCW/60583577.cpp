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
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool res=true;
    int len = n%2==0?n/2:(n/2)+1;
    rof(0,len-1,1){
      bool minchk = (min(s[i],s[n-1-i])<=min(s[i+1],s[n-i-2]));
      bool maxchk = (max(s[i],s[n-1-i])>=max(s[i+1],s[n-i-2]));
      if(minchk&&maxchk)
        continue;
      else res = false;
    }
    res?cout<<"YES":cout<<"NO";cout<<endl;
  }
  return 0;
}

