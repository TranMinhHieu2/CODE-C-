#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		string kq="";
		transform(s.begin(),s.end(),s.begin(),::tolower);
		for(int i=0;i<s.size();i++){
			if(s[i]=='a'||s[i]=='b'||s[i]=='c') kq+="2";
			if(s[i]=='d'||s[i]=='e'||s[i]=='f') kq+="3";
			if(s[i]=='g'||s[i]=='h'||s[i]=='i') kq+="4";
			if(s[i]=='j'||s[i]=='k'||s[i]=='l') kq+="5";
			if(s[i]=='m'||s[i]=='n'||s[i]=='o') kq+="6";
			if(s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s') kq+="7";
			if(s[i]=='t'||s[i]=='u'||s[i]=='v') kq+="8";
			if(s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z') kq+="9";
		}
		string result=kq; 
		reverse(kq.begin(),kq.end());
		if(result.compare(kq)==0) 
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

