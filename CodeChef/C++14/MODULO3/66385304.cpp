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
      int a,b;
      cin>>a>>b;
      if(a%3==0||b%3==0) cout<<0;
      else if((a%3==1&&b%3==1)||(a%3==2&&b%3==2)) cout<<1;
      else cout<<2;
      cout<<endl;
      
    }
    return 0;
  }
   