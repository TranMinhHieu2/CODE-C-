#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream t(s);
		int count=0;
		while(t>>s) count++;
		cout<<count<<endl;
	}
}
