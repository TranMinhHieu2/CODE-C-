#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string x=s;
	stringstream y(x);
	int count=0, i=0;
	while(y>>x) count++;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	//ham chuyen tu dau chuoi den cuoi  
	// ::tolower chuyen chu hoa thanh thuong
	stringstream t(s);
	string s1[count];
	while(t>>s) s1[i++]=s;
	cout<<s1[count-1];
	for(int j=0;j<count-1;j++)
		cout<<s1[j][0];
	cout<<"@ptit.edu.vn";	
}
