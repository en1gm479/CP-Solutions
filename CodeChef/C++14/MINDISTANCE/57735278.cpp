#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL i=a;i<b;i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;


int main(){
   IOS;
   int t;
   cin>>t;
   while(t--){
   	int a,b,c,d;
   	cin>>a>>b>>c>>d;
   	cout<<min(a+b,c+d)<<endl;
   }

   return 0;
}