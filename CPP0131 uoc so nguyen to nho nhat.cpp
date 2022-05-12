#include<bits/stdc++.h>
using namespace std;
long ktra(int i){
	if(i==1) return 1;
	for(int j=2;j<=i;j++){
		if(i%j==0){ 
			return j;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cout<<ktra(i)<<" ";
		}
		cout<<endl;
	}
}
