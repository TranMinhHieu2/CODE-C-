#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>> t;
	while(t--){
		int n;
		cin>>n;
		vector<long long > a(1000006,0);
		long long j;
		for(int i=0;i<n;i++){
			cin>>j;
			if(j>0) a[j]++; 
		}
		for(int i=1;i<1000006;i++){
			if(a[i]==0){
				cout<<i<<endl;
				break;
			}
		}
		
	}
}
