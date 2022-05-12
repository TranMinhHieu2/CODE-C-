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
	for(int i=0;i<dv.size();i++){
		if(dv[i]=='0') count++;
		else break;
	}
	dv.erase(0,count);
	return dv;
}
string replace6(string &s){
	replace(s.begin(),s.end(),'5','6');
	return s;
}
string replace5(string &s){
	replace(s.begin(),s.end(),'6','5');
	return s;
}
int main(){
	int t; cin>>t;
	while(t--){
		string a, b;
		cin>>a>>b;
		replace5(a);replace5(b);
		cout<<sum(a,b)<<" ";
		replace6(a);replace6(b);
		cout<<sum(a,b)<<endl;
	}
}
