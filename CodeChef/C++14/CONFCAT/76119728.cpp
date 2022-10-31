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

map<int,int> factor(int a){
  map<int,int> fact;
  int i=2;
  while(a&&a!=1){
    if(a%i==0){
      fact[i]++;
      a/=i;
    }
    else i++;
  }
  return fact;
}

int main(){
  IOS;
  // cout<<"df0";
  test(){
    int n;
    cin>>n;
    vector<int> a,b,c(n);
    int gt=INT_MIN;
    rof(0,n,1){
      cin>>c[i];
      gt = max(gt,c[i]);
    }
    // cout<<gt<<" l";
    bool chk=1;
    rof(0,n,1){
      if(c[i]==gt) chk=0;
      if(chk){
        a.push_back(c[i]);
      }
      else{
        b.push_back(c[i]);
      }
    }
    if(a.size()==0) cout<<-1<<endl;
    else{
      cout<<a.size()<<endl;;
      display(a);
      cout<<b.size()<<endl;
      display(b);
    }
  }

  return 0;
}
 