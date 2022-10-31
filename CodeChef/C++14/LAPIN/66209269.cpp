#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int len=s.size()/2,n=s.size();
	    map<char,int> mpp;
	    for(int i=0;i<len;i++){
	        mpp[s[i]]++;
	        mpp[s[n-i-1]]--;
	    }
	   bool chk=true;
	   for(auto it:mpp)
	   if(it.second!=0) chk =false;
	   if(chk) cout<<"YES";
	   else cout<<"NO";
	   cout<<endl;
	}
	return 0;
}
