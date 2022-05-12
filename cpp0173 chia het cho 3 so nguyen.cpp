#include <bits/stdc++.h>
using namespace std;
long long lcm(long long a, long long b){
	return a*b/__gcd(a,b);
} 
void kq(){
	long long x, y, z, n;
	cin>>x>>y>>z>>n; 
	long long l=lcm(x,lcm(y,z));
	long long h=pow(10,n-1);
	if(l>=pow(10,n)){
		cout<<"-1"<<endl;
	} 
	else {
		if(h%l==0)
			cout<<h<<endl;
		else{
			h/=l;
			l*=(h+1);
			cout<<l<<endl;
		}
	}
}
int main(){
	int t; 
	cin>>t;
	while(t--){
		kq();
	}
}

