#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
	string name;
	string malop;
	string date;
	float diem;
};
void nhap (SinhVien &a){
	getline(cin,a.name);
	getline(cin,a.malop);
	getline(cin,a.date);
	cin>>a.diem;
}
void in(SinhVien &a){
	cout<<"B20DCCN001 ";
	cout<<a.name<<" ";
	cout<<a.malop<<" ";
	if(a.date.size()==9){
		if(a.date[2]!='/'){
			a.date.insert(0,1,'0');
		}
		else a.date.insert(3,1,'0');
	}
	else if(a.date.size()==8){
		a.date.insert(0,1,'0');
		a.date.insert(3,1,'0');
	}
	cout<<a.date<<" ";
	cout<<fixed<<setprecision(2)<<a.diem; 
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
