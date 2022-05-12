#include<bits/stdc++.h>
using namespace std;
string sum(string a, string b){
	string dv="";
	while(a.size() < b.size()) a="0"+a;
	while(a.size() > b.size()) b="0"+b;
	if(a<b) swap(a,b);
	int carry=0; 
	int tmp;
	for(int i=a.size()-1;i>=0;i--){
		if(a[i]<b[i]){
			tmp=(10+a[i]-48)- (b[i]-48) + carry;
			carry=-1;
		}
		else{
			tmp=(a[i]-48) - (b[i]-48) + carry;
			if(tmp<0){
				carry=-1;
				tmp=tmp+10;
			}
			else carry =0;
		}
		dv=(char)(tmp+48)+dv;
	}
	return dv;
}
int main(){
	int t; cin>>t;
	while(t--){
		string a, b;
		cin>>a>>b;
		cout<<sum(a,b)<<endl;
	}
}
