#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		string s1[s.size()];
		int k=0;
		for(int i=0;i<s.size();i++){
			if(s[i]<'0'||s[i]>'9')
				s[i]=' ';
		}
		stringstream iss(s);
		while(iss>>s){
			for(int i=0;i<s.size();i++){
				if(s[i]=='0') 
					s[i]=-1;
				else break;
			}
			s.erase(remove(s.begin(),s.end(),-1),s.end());
			s1[k++]=s;
		}
		if(k==0) continue;
		else{
			long long max=atoi(s1[0].c_str());
			for(int i=1;i<k;i++)
				if(atoi(s1[i].c_str())>=max) 
					max=atoi(s1[i].c_str());
			cout<<max<<endl;
		}
	}
}

