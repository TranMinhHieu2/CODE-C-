#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string x=s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	stringstream y(x);
	int count=0, i=0;
	while(y>>x) count++;
	stringstream t(s);
	string s1[count];
	while(t>>s) s1[i++]=s;
	for(int k=0;k<count;k++){
		if(k<count-2){
			s1[k][0]-=32;
			cout<<s1[k]<<" ";
		}
		if(k==count-2){
			s1[k][0]-=32;
			cout<<s1[k]<<","<<" ";
		}
		else if(k==count-1){
			transform(s1[k].begin(),s1[k].end(),s1[k].begin(),::toupper);
			cout<<s1[k];
		}
	}
}
