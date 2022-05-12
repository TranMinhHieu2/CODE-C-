#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			int count=0;
			for(int j=i+1;j<s.length();j++){
				if(s[i]==s[j]){
					count ++;
					s[j]='1';
				} 
			}
			if(count>0) s[i]='1';
		}
		for(int i=0;i<s.length();i++){
			s.erase(remove(s.begin(),s.end(),'1'),s.end());
		}
		cout<<s<<endl;
	}
}

