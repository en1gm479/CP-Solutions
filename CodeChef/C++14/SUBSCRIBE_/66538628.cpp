#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int p=n/6;
        if(n%6) p++;
        cout<<p*x<<endl;
    }
	return 0;
}
