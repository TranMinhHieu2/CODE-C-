#include <bits/stdc++.h>
using namespace std;
const long h = pow(10,9) + 7;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		long long a=1, a1=0, a2=1;
		int i=2;
		while(i<=n){
			a=a1%h+a2%h;
			a1=a2;
			a2=a;
			i++;
		}
		cout<<a%h<<endl;
	}
}
