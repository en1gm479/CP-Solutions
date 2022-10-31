//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool chk=true,chk2=true;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!='0'&&chk2) {
                chk2=false;
                chk=false;
            }
            if(s[i]=='0'&&chk) continue;
            cout<<s[i];
        }
        cout<<endl;
    }
	return 0;
}

