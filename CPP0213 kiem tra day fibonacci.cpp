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
		long long a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++){
			if(fibonaci(a[i])==1) 
				cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

