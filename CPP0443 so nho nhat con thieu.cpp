#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n-1;i++)
			cin>>a[i];
		long long s1=0;
		for(int i=0;i<n-1;i++){
			s1=s1+a[i];
		}
		long long s2;
		s2=(n*(n+1))/2;
		cout<<s2-s1<<endl;
	}
} 
