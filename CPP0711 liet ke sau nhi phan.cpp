#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
			a[i]=0;
		for(int i=0;i<pow(2,n);i++){
			for(int i=0;i<n;i++)
			cout<<a[i];
			cout<<" ";
			a[n-1]++;
			for(int i=n-1;i>0;i--){
				if(a[i]>1){
					a[i-1]++;
					a[i]-=2;
				}
			}	
		}
		cout<<endl;
	}
}
