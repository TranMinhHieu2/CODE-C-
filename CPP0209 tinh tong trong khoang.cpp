#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n, q;
		cin>>n>>q;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		while(q--){
			int c, b;
			cin>>c>>b;
			long sum=0;
			for(int i=c-1;i<b;i++)
				sum+=a[i];
			cout<<sum<<endl;
		}
		cout<<endl;
	}
} 
