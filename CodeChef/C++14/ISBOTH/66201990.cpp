#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if((n%11==0)&&(n%5==0)) cout<<"BOTH";
	else if((n%11==0)||(n%5==0)) cout<<"ONE";
	else cout<<"NONE";
	return 0;
}
