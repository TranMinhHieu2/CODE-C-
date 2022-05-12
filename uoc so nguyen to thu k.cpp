#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		int a[n/2],j=0;
		for(int i=2;i<=n;i++){
			while(n%i==0){
				a[j++]=i;
				n=n/i;
			}
		}
		if(k>j){
		cout<<"-1"<<endl;
	}
	else cout<<a[k-1]<<endl;
	}
}
