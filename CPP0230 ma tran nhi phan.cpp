#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][3];
	int count=0,dem=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<3;j++)
			cin>>a[i][j];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			if(a[i][j]==1) count++;
			else if(a[i][j]==0)count--;
		}
		if(count>0) dem++;
		count=0;
	}
	cout<<dem<<endl;
}

