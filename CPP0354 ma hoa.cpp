#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while (t--){
		string s;
		cin>>s;
		int length=s.size(); 
		for(char i='A';i<='Z';i++){
			char a=s[0];
			if(a==i){
				s.erase(remove(s.begin(),s.end(),i),s.end());
				int count=length-s.size();
				if(count>0) cout<<a<<count;
				length=s.size();
				i='A';
			}
			if(s.size()==0) break;
		}
		cout<<endl;
	}
}
