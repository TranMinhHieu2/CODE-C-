#include<bits/stdc++.h>
using namespace std;
bool sont(long a){
	for(long i=2;i<=sqrt(a);i++){
		if(a%i==0) return false;
	}
	return true;
}
void kq(long n){
	long max=0;
	for(long i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(sont(i)&&i>1){
				if(i>max)
					max=i;
				}
			if(sont(n/i)){
				if(n/i>max)
					max=n/i;
			}
		}
	}
	cout<<max<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		long n;
		cin>>n;
		kq(n);
		
	}
}
