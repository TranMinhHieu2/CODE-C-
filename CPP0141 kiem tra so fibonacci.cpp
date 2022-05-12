#include <bits/stdc++.h>
using namespace std;
long long fibonaci(long long n){
	long long a1=1, a2=1;
	if(n==1||n==2)
		return 1;
	long long a=0; 
	while(a<n){
		a=a1+a2;
		a1=a2;
		a2=a;
	}
	if(a==n) return 1;
	else return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(fibonaci(n)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

