#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
	string name, sex, birth, adress, id, date;
};
void nhap(NhanVien &a){
	getline(cin,a.name);
	getline(cin,a.sex);
	getline(cin,a.birth);
	getline(cin,a.adress);
	getline(cin,a.id);
	getline(cin,a.date);
}
string ngay(string s){
	if(s.size()==9){
		if(s[2]!='/'){
			s.insert(0,1,'0');
		}
		else
			s.insert(3,1,'0');
		}
	else if(s.size()==8){
		s.insert(0,1,'0');
		s.insert(3,1,'0');
	}
	return s;
}
void in(NhanVien &a){
	cout<<"00001"<<" ";
	cout<<a.name<<" ";
	cout<<a.sex<<" ";
	cout<<ngay(a.birth)<<" ";
	cout<<a.adress<<" ";
	cout<<a.id<<" ";
	cout<<ngay(a.date);
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
