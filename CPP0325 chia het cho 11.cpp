#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while (t--){
		string s;
		cin>>s;
		int sumc=0, suml=0;
		for(int i=0;i<s.size();i++){
			if(i%2==0){
				sumc=(int)(s[i]-48)+sumc;
			}
			else{
				suml=(int)(s[i]-48)+suml;
			}
		}
		if(abs(sumc-suml)%11==0) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	} 
}

