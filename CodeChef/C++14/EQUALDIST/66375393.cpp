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
      int x,y;
      cin>>x>>y;
      if((x+y)%2==0) cout<<"YES";
      else cout<<"NO";
      cout<<endl;
    }
    return 0;
  }
   