#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=0;j<i;j++){
			if(a[i]==a[j])
				a[i]=-1;
		}
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(a[i]!=-1)
			cout<<a[i]<<" ";
	}
}

