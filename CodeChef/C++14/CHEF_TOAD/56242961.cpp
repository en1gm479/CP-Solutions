#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n>0 && n<100){
            int flag=0;
            for(int i=2;i<n;i++){
                if(n%i==0)
                {
                    flag =1;
                    break;
                }
            }
            if(flag)
            cout<<"HUNGRY"<<endl;
            else
            cout<<"COOKIES"<<endl;
        }
        else{
            cout<<"HUNGRY"<<endl;
        }
    }
	// your code goes here
	return 0;
}
