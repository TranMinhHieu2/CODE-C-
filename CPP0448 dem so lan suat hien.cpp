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
			if(a[i]==k)
				count ++;
		}
		sort(a,a+n);
		if(k>a[n-1]||count==0) cout<<"-1"<<endl;
		if(count>0) cout<<count<<endl;
	}
} 
