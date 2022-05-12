#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string n;
		cin>>n;
		long long m;
		cin>>m;
		int h=n.size();
		long kq=0;
		for(int i=0;i<h;i++){
			kq=(kq*10+(n[i]-'0'))%m;
		}
		cout<<kq<<endl;
	}
}

