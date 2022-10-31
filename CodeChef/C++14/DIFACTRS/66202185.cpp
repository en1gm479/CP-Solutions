#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> v;
	for(int i=1;i<=n;i++){
	    if(n%i==0) v.emplace_back(i);
	}
	cout<<v.size()<<endl;
	for(auto it:v)
	cout<<it<<" ";
	return 0;
}
