#include <bits/stdc++.h>
using namespace std;
int tcs(long n){
	int sum=0;
	while(n>0){
		int a=n%10;
		sum=sum+a;
		n=n/10;
	}
	return sum;
}
void kq(long n){
	while(n>=10){
		n=tcs(n);
	}
	cout<<n<<endl;
}
int main(){
	int n;
	cin>>n;
	while (n--){
		long b;
		cin>>b;
		kq(b);
	}
}
