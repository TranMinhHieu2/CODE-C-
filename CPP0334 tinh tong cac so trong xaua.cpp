#include<bits/stdc++.h>
using namespace std;
string sum(string a, string b){
	string kq="";
	while(a.size() > b.size()) b= "0"+b;
	while(a.size() < b.size()) a="0"+ a;
	int carry=0;
	for(int i=a.size()-1;i>=0;i--){
		int tmp=(a[i]-48) + (b[i]-48) + carry;
		carry=tmp/10;
		tmp=tmp%10;
		kq=(char)(tmp+48)+kq;
	}
	if(carry>0) kq= "1"+kq;
	return kq;
}
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		string result("0");
		int k=0, j=0;
		string s1[s.size()];
		for(int i=0;i<s.size();i++){
			if(s[i]<'0'||s[i]>'9')
				s[i]=' ';;
		}
		stringstream iss(s);
		string s2;
		while(iss>>s2)
			s1[k++]=s2;
		for(int i=0;i<k;i++){
			string b=s1[i];
			result=sum(result,b);
		}
		cout<<result<<endl;
	}
}
