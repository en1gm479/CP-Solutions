#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i]=='A') cout<<'T';
	        if(s[i]=='T') cout<<'A';
	        if(s[i]=='C') cout<<'G';
	        if(s[i]=='G') cout<<'C';
	    }
	    cout<<endl;
	}
	return 0;
}
