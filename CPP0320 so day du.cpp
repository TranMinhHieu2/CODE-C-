#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int length = 0;
		int count =0;
		if(s[0]=='0') cout<<"INVALID"<<endl;
		else{
			for(int i=0;i<=9;i++)
			{
				length=s.size(); 
				s.erase(remove(s.begin(),s.end(),(char)('0'+i)),s.end());
				if(length>s.size())count++; 
			}
			if(s.size()==0)
				{if(count ==10)cout<<"YES"<<endl;
				 else cout<<"NO"<<endl;}
			else cout<<"INVALID"<<endl;
		}
	} 
}
