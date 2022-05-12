#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int sum=0,count=0;
		int length = s.size();
		for(char i='0';i<='9';i++){
			s.erase(remove(s.begin(),s.end(),i),s.end());
			count=length - s.size();
			if(count>0) sum+=(int)(i-48)*count;
			length=s.size();
		} 
		sort(s.begin(),s.end());
		cout<<s<<sum<<endl;
	}
} 
