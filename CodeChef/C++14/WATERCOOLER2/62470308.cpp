#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,n_m=0;
        cin>>x>>y;
        n_m=y%x==0?(y/x-1):y/x;
        cout<<n_m<<endl;
        
    }
	// your code goes here
	return 0;
}
