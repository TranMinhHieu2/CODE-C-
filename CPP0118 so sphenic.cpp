#include<bits/stdc++.h>
using namespace std;
bool ktra(int n){
	int dem=0;
	for(int i=2;i<=sqrt(n);i++){
			int count = 0;
			while(n%i==0){
				n=n/i;
				dem++; count++;
				if(count>1||dem>3)
					return false; 	
		}
	}
		if(n!=1)
			dem++;
		if(dem==3)
			return true;
		else return false;	
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		if(ktra(n)) 
			cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
