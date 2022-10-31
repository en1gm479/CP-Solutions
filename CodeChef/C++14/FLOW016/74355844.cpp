#include <bits/stdc++.h>
using namespace std;

long long gcd(int a, int b){
    if(b==0) return a;
    else
    return gcd(b,a%b);
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    long long x = gcd(a,b);
	    cout<<x<<" "<<a/x*b<<endl;
	}
	return 0;
}
