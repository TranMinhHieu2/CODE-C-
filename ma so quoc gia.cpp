#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	while(n--){
		string s;
		getline (cin,s);
		string xoa="084";//khai bao bien xoa gom ptu 084
		if(s.length()>=4&&s.length()<=18){     //s.length() do rong chuoi
			string::size_type i=s.find(xoa);
		
			/*lenh day du std::string::size_type bien - gan i = vi tri bat dau 
			cua bien xoa trong chuoi s nhap vao
			lenh s.find (xoa) tim vi tri bat dau cua so 084*/
		
			if(i != string::npos)
				s.erase(i,xoa.length());
			cout<<s<<endl;
		}
	}
}
