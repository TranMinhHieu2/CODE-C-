#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int ktra(long n){
	while(n>0){
		long c;
		c=n%10;
		if(c!=0&&c!=6&&c!=8) 
			return false;
		n=n/10;
	}
	return true;
}
int main(){
	long a;
	cin>>a;
	while(a--){
		long n;
		cin>>n;
		if(ktra(n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
