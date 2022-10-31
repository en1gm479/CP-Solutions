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
	    if(s=="10") cout<<"10";
	    else{
	        sort(s.begin(),s.end());
	        cout<<s;
	    }
	    
	    cout<<endl;
	    
	}
	return 0;
}
