#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while (t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int min=n;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j])
					if(min>j) 
						min=j;
			}
		}
		if(min!=n) cout<<a[min]<<endl;
		else cout<<"-1"<<endl;
	}
}
