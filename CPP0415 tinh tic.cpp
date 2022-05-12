#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		long a, b;
		cin>>a>>b;
		long x[a], y[b];
		for(long i=0;i<a;i++)
			cin>>x[i];
		for(long j=0;j<b;j++)
			cin>>y[j];
		sort(x,x+a);
		long long  max=x[a-1];
		sort(y,y+b);
		long long  min=y[0];
		cout<<max*min<<endl;
	}
}
