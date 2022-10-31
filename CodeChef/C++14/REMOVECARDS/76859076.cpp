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
	   int maxi=0;
	   map<int,int> mpp;
	   for(int i=0;i<n;i++){
	       cin>>v[i];
	       mpp[v[i]]++;
	       maxi=max(maxi,mpp[v[i]]);
	   }
	   
	   cout<< n-maxi<<endl;
	}
	return 0;
}
