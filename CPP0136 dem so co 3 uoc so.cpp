#include<bits/stdc++.h>
using namespace std;
bool sont(long n){
	if(n<2) return false;
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0)
				return false;
		}
	}
	return true;
}
int main(){
	int t; cin>>t;
	while(t--){
		long n;
		cin >>n;
		int count=0;
		for(int i=2;i<=sqrt(n);i++){
			if(sont(i))
				count++;
		}
		cout<<count<<endl;
	}
}

