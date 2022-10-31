#include<bits/stdc++.h>
using namespace std;
 
#define rof(a,b,count) for(int i=a;i<b;i+=count)
#define endl "\n"

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		long long int c,d,l;
		cin>>c>>d>>l;
		bool flag = false;
		if(l%4==0){
			int cats_blw = (l-4*d)/4;
			int cats_abv = c - cats_blw;
			if(cats_abv<=c && cats_blw<=c && l>=4*d && cats_blw>=0 && cats_abv>=0 && (cats_abv)<=2*d)
				flag=true;
			else flag=false;
		}
		if (flag) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
