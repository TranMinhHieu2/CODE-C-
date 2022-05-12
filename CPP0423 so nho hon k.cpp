#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[k];
		int count=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++){
			if(a[i]<=k) a[i]=-1; 
		} 
		for(int i=0;i<n;i++){
			if(a[i]==-1) count++;
			else {
			}
		}
	} 
}

