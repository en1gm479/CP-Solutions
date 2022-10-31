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
  for(int i=0;i<n;i++) cin>>v[i];

  sort(v.begin(),v.end());
  int maxi=1,count=1;
  for(int i=1;i<n;i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
    maxi=max(count,maxi);
  }
  cout<<n-maxi<<endl;
	}
	return 0;
}
