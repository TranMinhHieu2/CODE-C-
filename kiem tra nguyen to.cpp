#include <bits/stdc++.h>
using namespace std;
bool sont(long n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) {
			return false;
		}
	}
	return true;
}
int main(){
	long n;
	cin>>n;
	if(sont(n)) cout<<"YES";
	else cout<<"NO";
}
