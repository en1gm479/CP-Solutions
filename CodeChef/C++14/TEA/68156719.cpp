#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,temp=0,ct=0;
	    cin>>x>>y>>z;
	    while(temp<x){
	        temp+=y;
	        ct++;
	    }
	    cout<<ct*z<<endl;
	}
	return 0;
}
