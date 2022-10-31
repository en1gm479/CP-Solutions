#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(LL _i=a;_i<b;_i+=count)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long long int LL;

int main(){
   IOS;
   int t;
   cin>>t;
   while(t--){
   		int n;
   		cin>>n;
   		int ctevn=0,even1=0,odd1=0,even2=0,odd2=0,evnpos1=-1,oddpos1=-1,evnpos2=-1,oddpos2=-1;
   		set<int> s1,s2;
   		for(int i=0;i<n;i++){
   			LL a;
   			cin>>a;
   			if(a%2==0) ctevn++;
   			if(i%2==0){
   				if(a%2!=0){
   					oddpos2=i;
   					even1++;
   					s1.insert(i);
   				}
   				else{
   					evnpos1=i;
   					odd2++;
   					s2.insert(i);
   				}
   			}
   			else{
   				if(a%2==0){
   					evnpos2=i;
   					odd1++;
   					s1.insert(i);
   				}
   				else{
   					oddpos1=i;
   					even2++;
   					s2.insert(i);
   				}
   			}

   		}
   		   	// 			cout<<even1<<odd1<<" "<<even2<<odd2<<endl;
   		   	// 			for(auto it:s2){
   						// cout<<it<<endl;}
   						// cout<<evnpos1<<oddpos1<<" "<<evnpos2<<oddpos2<<endl;


   		if(even1+odd1<=even2+odd2){
   			if(ctevn==n) cout<<(-1)<<endl;
   			else{
   				cout<<even1+odd1<<endl;
   				for(auto it:s1){
   					if(it%2==0)
   						cout<<it+1<<" "<<oddpos1+1<<endl;
   					else
   						cout<<it+1<<" "<<oddpos1+1<<endl;
   				}
   			}
   		}
   		else{
   			if(ctevn==n) cout<<(-1)<<endl;
   			else{
   				cout<<even2+odd2<<endl;
   				for(auto it:s2){
   					if(it%2==0)
   						cout<<it+1<<" "<<oddpos2+1<<endl;
   					else
   						cout<<it+1<<" "<<oddpos2+1<<endl;
   				}
   			}
   		}

   }

   return 0;
}
