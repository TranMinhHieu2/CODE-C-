#include <bits/stdc++.h>
using namespace std;
int main(){
	string s, xoa;
	getline (cin,s);
	getline (cin,xoa);
	cin.ignore();
	string::size_type i=s.find(xoa);
	s.erase(i,xoa.length());
	cout<<s<<endl;
}

