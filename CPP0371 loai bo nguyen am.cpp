#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	char s1[]="a,e,i,o,u,y";
	for(int i=0;i<strlen(s1);i++){
		s.erase(remove(s.begin(),s.end(),s1[i]),s.end());
	}
	for(int i=0;i<s.size();i++)
	 cout<<"."<<s[i];
}
