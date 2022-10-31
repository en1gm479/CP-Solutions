#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int t=n-1;
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        if(j<t) cout<<" ";
	        else cout<<"*";
	    }
	    --t;
	    cout<<endl;
	}
	return 0;
}
