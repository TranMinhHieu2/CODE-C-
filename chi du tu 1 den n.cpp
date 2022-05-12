#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	while (a--){
		long long n,k,sum=0;
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			sum+=fmodf(i,k);
		}
		cout<<sum<<endl;
	}
}
