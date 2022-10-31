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
      int n,a,ct=0;
      cin>>n;
      if(n%2!=0){
        rof(0,n,1)
        cin>>a;
        cout<<-1;
      } 
      else{
        rof(0,n,1){
        cin>>a;
        if(a==1) ct++;
        }
        cout<<abs(n/2-ct);
      }
      cout<<endl;
      
    }
    return 0;
  }
   