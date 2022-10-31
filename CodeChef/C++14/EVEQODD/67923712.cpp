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
 
 int countStep(int n){
    int ct=0;
    while(n%2==0){
      ct++;
      n/=2;
    }
    return ct;
 }
 
int main(){
  IOS;
  test(){
    int n,ct_e=0,ct_o=0;
    cin>>n;
    vector<int>a(2*n);
    rof(0,2*n,1) {
      cin>>a[i];
      if(a[i]%2==0) ct_e++;
      else ct_o++;
    }
    if(ct_e==ct_o) cout<<0;
    else if(ct_o>ct_e) cout<<(ct_o-ct_e)/2;
    else{
        vector<int>step;
        rof(0,2*n,1){
          if(a[i]%2==0){
            int x = countStep(a[i]);
            step.push_back(x);
          }
        }
        sort(step.begin(),step.end());
        // cout<<"hii";
        // display(step);
        int s=0;
        rof(0,(ct_e-ct_o)/2,1) s+=step[i];
        cout<<s;
    }
    cout<<endl;
  }
  
  return 0;
}
 