#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    int e_ct=0,o_ct=0,ct1=0,ct2=0;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        if(v[i]%2==0) e_ct++;
	        else o_ct++;
	        
	        if(v[i]==2) ct2++;
	        if(v[i]==1) ct1++;
	    }
	    int ans=0;
	   // if(o_ct>=e_ct){
	   //     ans=e_ct;
	   // }
	   // else{
	   //     if(ct1!=0) ans=e_ct;
	   //     else {
	   //         ans=min(e_ct,(o_ct)*2);
	   //     }
	   // }
	   if(o_ct!=0) ans=e_ct;
	    
	    cout<<ans<<endl;
	}
	return 0;
}
