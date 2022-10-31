#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    map<int,int>mpp;
	    int n,maxi=0;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        mpp[a]++;
	        maxi = max(maxi,mpp[a]);
	    }
	    cout<<n-maxi<<endl;
	}
	return 0;
}
