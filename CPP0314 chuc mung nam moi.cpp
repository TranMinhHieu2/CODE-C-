#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	string s[n], s1[n];
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,s[i]);
	}
	for(int i=0;i<n;i++){
		stringstream a(s[i]);
		while(a>>s[i]) s1[i]+=s[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(s1[i].compare(s1[j])==0)
				s1[j]="-1";
		}
	}
	int count=0;
	for(int i=0;i<n;i++)
		if(s1[i]!="-1") count++;
	cout<<count<<endl;
} 
