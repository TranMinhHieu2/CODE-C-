#include <bits/stdc++.h>
using namespace std;
int ktra(string s){
	int count=0;
		for(int i=0;i<s.size();i++){
			if(abs(s[i]-s[i+1])==1) count++;
		}
		if(count==s.size()-1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
}
int main(){
	int n;
	cin>>n;
	cin.ignore();
	while(n--){
		string s;
		getline(cin,s);
	}
}
