#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		string s;
		cin>>s;
		int k=0;
		for(int i=0;i<s.size();i++){
			for(int j=i+1;j<s.size();j++){
				if(s[i]==s[j])  
				 k++; 
			}
		}
		cout<<s.size()+k<<endl;
	}
} 
