#include <bits/stdc++.h>
using namespace std;
int ucln(int a, int b){
	int min, kq;
	if(a<b) 
		min=a;
	else min=b;
	for(int i=1;i<=min;i++){
		if(a%i==0&&b%i==0)
			kq=i;
	}
	return kq;
}
int main(){
	int t; cin>>t;
	while(t--){
		int a, x, y;
		cin>>a>>x>>y;
		for(int i=1;i<=ucln(x,y);i++)
			cout<<a;
		cout<<endl;
	}
}
