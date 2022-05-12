#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		long count=0;
		string s;
		cin>>s;
		reverse(s.begin(),s.end());
		for(int i=0;i<s.size();i++){
			if(s[i]=='1'){//thao tac voi chuoi string ki tu phai co nhay''
				if(i%4==0) count+=6;
				if(i%4==1) count+=2;
				if(i%4==2) count+=4;
				if(i%4==3) count+=8;
			}
		}
		if(count%5==0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
