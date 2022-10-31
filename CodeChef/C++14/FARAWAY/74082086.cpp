#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    vector<int> a(n);
	    long long tot=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        tot+=(max(abs(1-a[i]),abs(m-a[i])));
	    }
	    cout<<tot<<endl;
	}
	return 0;
}
