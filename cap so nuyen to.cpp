#include<bits/stdc++.h>
using namespace std;
bool sont(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0)return false;
	}
	return true;
}
int  main(){
	int t; cin>>t;
	while (t--){
		int n;
		cin>>n;
		for(int i=2;i<n;i++){
			if(sont(i)){
				if(sont(n-i)){
					cout<<i<<" "<<n-i<<endl;
					break;
				}
			}
		}
	}
}
