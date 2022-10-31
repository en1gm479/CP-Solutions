#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(ll i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long int
const unsigned int mod = 1000000007;


int main(){
   IOS;
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      multiset<int> s1;
      rof(0,2*n,1){
         int a;
         cin>>a;
         s1.insert(a);
      }
      bool chk = false;
      int i=0;
      for(i=0;i<n;i++){
         if((s1.count(i)==0)){
            chk=true;
            break;
         }
         else{
            if(s1.count(i)==1)
             {  chk=false;
                break;}
         }
      }
      // cout<<s1.count(n-1);
      if((i==n)&&(s1.count(n-1)>1)) chk=true;
      chk?cout<<"YES":cout<<"NO";
      cout<<endl;
   }

}

