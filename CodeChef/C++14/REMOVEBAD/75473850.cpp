#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    map<int,int> mpp;
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    int Mfreq=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        mpp[a[i]]++;
	        Mfreq=max(Mfreq,mpp[a[i]]);
	    }
	    cout<<n-Mfreq<<endl;
	}
	return 0;
}
