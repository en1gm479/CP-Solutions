#include <bits/stdc++.h>
using namespace std;

int main() {
    long long sum_e=0,sum_o=0,eve=2,odd=1,n;
    // int n;
    cin>>n;
    for(int i=0;i<n;i++){
        sum_e+=eve;
        sum_o+=odd;
        eve+=2;
        odd+=2;
    }
    cout<<sum_o<<" "<<sum_e;
	// your code goes here
	return 0;
}
