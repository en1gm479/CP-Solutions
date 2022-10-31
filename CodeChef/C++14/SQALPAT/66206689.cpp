#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k=0;;
	cin>>n;
	for(int i=0;i<n;i++){
	    if(i&1){
	       for(int j=0;j<5;j++)
	        cout<<--k<<" ";
	        k=k+4;
	    }
	    else{
	        for(int j=0;j<5;j++){
	            cout<<++k<<" ";
	        }
	        k=(k)+6;
	    }
	    cout<<endl;
	}
	return 0;
}
