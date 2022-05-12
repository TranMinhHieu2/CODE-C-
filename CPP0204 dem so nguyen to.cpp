#include <bits/stdc++.h>
using namespace std;
int ktra (int n){
	if(n>1){
		for(int i=2; i<n; i++){
			if(n%i==0) return 0;
		}
		return 1;
	}
	else return 0;
}
int main(){
	int t; cin>>t;
	while (t--){
		int a, b;
		cin>>a>>b;
		int count=0;
		for(int i=a;i<=b;i++){
			if(ktra(i)==1){
				count ++;
			}
		}
		cout<<count<<endl;
	}
} 
