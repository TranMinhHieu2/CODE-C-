#include<bits/stdc++.h>
using namespace std;
bool sont(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
		}
	

	return true;
}
void kq(int a, int b){
	for(int i=a;i<=b;i++){
		if (i>1&&sont(i)) cout<<i<<" ";
	}
	cout <<endl;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		int a,b;
		cin >>a>>b;
		kq(a,b);
		
	}
} 
