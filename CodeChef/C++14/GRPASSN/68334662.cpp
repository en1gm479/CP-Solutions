#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    map<int,int>mpp;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        mpp[a]++;
	    }
	    bool chk = true;
	    for(auto it:mpp){
	        if(it.second%it.first!=0) chk=false;
	       // cout<<it.first<<" "<<it.second;
	    }
	    chk?cout<<"YES":cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
