#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int x, y;
		cin>>x>>y;
		long p;
		cin>>p;
		long long s=1;
		int n=x%p;
		y=y%(p-1);
		for(int i=1;i<=y;i++)
			s=s*n%p;
		cout<<s<<endl;
	}
}
