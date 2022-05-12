#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<long long> a(n+10,-1);
		long long j;
		for(long long i=0;i<n;i++){
			cin>>j;
			if(i>=0&&j<=n-1) a[j]=j;
		}
		for(long long i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<< endl;
	}
}
