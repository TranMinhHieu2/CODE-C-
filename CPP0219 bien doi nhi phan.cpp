#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--) {
		int n, m;
		cin>>n>>m;
		int a[100][100];
		static int cot[1000];
		static int hang[1000];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				if(a[i][j]==1) {
					cot[i]=1;
					hang[j]=1;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(cot[i]==1 || hang[j]==1)
					cout<<"1"<<" ";
				else cout<<"0"<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	} 
}

