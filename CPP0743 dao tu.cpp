#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		reverse(s.begin(),s.end());
		stringstream a(s);
		while(a>>s){
			reverse(s.begin(),s.end());
			cout<<s<<" ";
		}
		cout<<endl;
	}
}
