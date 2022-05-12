#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int count=0;
		for(int i=0;i<n;i++){
			if(k==a[i]){
				cout<<"1"<<endl;
				break;
			}
			count++;
		}
		if(count==n) cout<<"-1"<<endl;
	}
} 
