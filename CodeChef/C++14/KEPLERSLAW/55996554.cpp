#include <iostream>
#include<math.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
	    double t1,t2,r1,r2,p1,p2;
	    cin>>t1>>t2>>r1>>r2;
	    p1=pow(r1,3)/pow(t1,2);
	    p2=pow(r2,3)/pow(t2,2);
	    if(p1==p2)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
