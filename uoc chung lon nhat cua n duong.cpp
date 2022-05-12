#include<bits/stdc++.h>
using namespace std;
long long bcnn(long long a, long long b){
	int gcd=__gcd(a,b);
	return a*b/gcd;
}
long long kq(int n){
	long long a=1;
	for(long long i=2;i<=n;i++){
		a=bcnn(a,i);
	}
	return a;
}
int main(){
	int x;cin>>x;
	while(x--){
		int n;cin>>n;
		cout<<kq(n)<<endl;
	}
}
