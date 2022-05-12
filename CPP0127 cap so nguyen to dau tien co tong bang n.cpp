#include <bits/stdc++.h>
using namespace std;
bool sont(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) 
			return false;
	}
	return true;
}
int kq(int n){
	if(sont(n-2)) return 2;
	for(int i=3;i<=n/2;i++){
		if(sont(i)&&sont(n-i)) return i;
	}
	return -1;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a=kq(n);
		if(a==-1) cout<<"-1"<<endl;
		else cout<<a<<" "<<n-a<<endl;		
	} 
}
