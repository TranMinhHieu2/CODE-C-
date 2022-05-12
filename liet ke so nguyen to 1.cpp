#include<bits/stdc++.h>
using namespace std;
bool sont(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int a,b,max,min;
	cin>>a>>b;
	if(a>b){
		max=a;
		min=b;
	}
	if(a<b){
		max=b;
		min=a; 
	}
	for(int i=min;i<=max;i++){
		if(sont(i))
			cout<<i<<" ";
	}
}

