#include <iostream>
using namespace std;

int main() {
    int h1,s1,h2,s2;
    cin>>h1>>s1>>h2>>s2;
    for(int i=0;h1>0&&h2>0;i++){
        if(i%2==0){
            h2-=s1;
        }
        else
        h1-=s2;
    }
    if(h2<=0)
    cout<<"YES";
    else
    cout<<"NO";
	// your code goes here
	return 0;
}
