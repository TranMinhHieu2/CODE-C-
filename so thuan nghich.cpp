#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int ktra(long long n){
	long long m=0;
	long long x=n;
	while(n>0){
		m=m*10+n%10;
		n=n/10;
	}
	if(x==m) return true;
	else return false;
}
int main(){
	int a;
	cin>>a;
	while(a--){
		long long n;
		cin>>n;
		if(ktra(n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}}
