#include <bits/stdc++.h>
using namespace std;
bool sont(int n){
	if(n<2) return false;
	else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return false;
		}
		return true;
	}
}
int main(){
	int t;
	cin>>t; 
	while(t--){
		int n;
		cin>>n;
		int count =0;
		for(int i=1; i<=n;i++){
			if(__gcd(i,n)==1)
				count++;
		} 
		if(sont(count))	cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}

