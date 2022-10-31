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


long long maxSubarraySum(vector<long long> &a){
  long long global_max=INT_MIN,local_max=0;
  for(int i=0;i<a.size();i++){
      local_max = max(a[i],a[i]+local_max);
      global_max = max(global_max,local_max);
  }
  return max(global_max,0*1ll);
} 

int main(){
  IOS;
  test(){
    int n;
    cin>>n;
    vector<long long>x(n);
    rof(0,n,1){
      cin>>x[i];
    } 
    int m;
    cin>>m;
    vector<long long> y(m);
    rof(0,m,1){
      cin>>y[i];
    }
    vector<long long> c,d;
    c=x;
    rof(0,m,1){
      if(y[i]>0) c.push_back(y[i]);
    }

    rof(0,m,1) {
      if(y[i]>0) d.push_back(y[i]);
    }
    rof(0,n,1) d.push_back(x[i]);

    // display(c);
    // display(d);
    long long ans1 = maxSubarraySum(c); 
    long long ans2 = maxSubarraySum(d);
    cout<<max(ans1,ans2)<<endl; 
  }
    return 0;
}
 