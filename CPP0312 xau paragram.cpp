#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s;
		int k, count=0;
		cin>>s>>k;
		if(s.size()<26) cout<<"0"<<endl;
		else{
			int length=s.size();
			for(char i='a';i<='z';i++)
			{
				s.erase(remove(s.begin(),s.end(),i),s.end());
				int a=length-s.size();
				if(a==0) count++;
				length=s.size();
			}
			if(count>k) cout<<"0"<<endl;
			else cout<<"1"<<endl;
		}
	}
}	
