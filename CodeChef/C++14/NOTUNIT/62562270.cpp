#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a%2==0&&a+2<=b)
	        cout<<a<<" "<<a+2;
	   else if(a%2!=0&&a%3!=0&&a+3<=b)
	        cout<<a+1<<" "<<a+3;
	   else if(a%2!=0&&a%3==0&&a+3<=b)
	        cout<<a<<" "<<a+3;
	   else 
	        cout<<(-1);
	   cout<<endl;
	}
	return 0;
}
