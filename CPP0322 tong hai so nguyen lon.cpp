#include <bits/stdc++.h>
using namespace std;
string sum(string a, string b){
	string dv="";
	while(a.size() < b.size()) a="0"+a;
	while(a.size() > b.size()) b="0"+b;
	int carry=0, count=0; 
	for(int i=a.size()-1;i>=0;i--){
		int tmp=a[i]-48 + b[i]-48 + carry;
		carry=tmp/10;
		tmp=tmp%10;
		dv=(char)(tmp+48)+dv;
	}
	if(carry>0) dv="1"+dv;
	return dv;
}
int main(){
	int t; cin>>t;
	while(t--){
		string a, b;
		cin>>a>>b;
		cout<<sum(a,b)<<endl;
	}
} 
