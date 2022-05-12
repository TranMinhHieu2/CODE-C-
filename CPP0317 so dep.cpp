#include <bits/stdc++.h>
using namespace std;
int check(string s){
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]%2==0)
			count++;
	}
	return count;
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while (t--){
		string s, s1;
		getline(cin,s);
		s1=s;
		reverse(s1.begin(),s1.end());
		if(s.compare(s1)==0 && check(s)== s.length()) cout<<"YES"<<endl;
		else if(s.compare(s1)!=0||check(s)!=s.length()) cout<<"NO"<<endl;
	}
}
