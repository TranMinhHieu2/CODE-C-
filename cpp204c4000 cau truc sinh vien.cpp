#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
	string name, malop, birth;
	float diem;
};
void nhapThongTinSV(SinhVien &a){
	getline(cin,a.name);
	cin>>a.malop>>a.birth>>a.diem;
}
void inThongTinSV(SinhVien &a){
	cout<<"N20DCCN001"<<" ";
	cout<<a.name<<" ";
	cout<<a.malop<<" ";
	if(a.birth[0]!='0') a.birth.insert(0,"0");
	if(a.birth[3]!='0') a.birth.insert(3,"0");
	cout<<a.birth<<" ";
	cout<<fixed<<setprecision(2)<<a.diem;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
