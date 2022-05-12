#include <bits/stdc++.h> 
using namespace std;
struct SinhVien
{
	string name;
	string birth;
	string malop;
	float diem;
};
void nhap(SinhVien ds[], int N){
	cin.ignore();
	for(int i=0;i<N;i++){
		getline(cin,ds[i].name);
		getline(cin,ds[i].malop);
		getline(cin,ds[i].birth);
		cin>>ds[i].diem; scanf(" ");
	}
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
void in(SinhVien ds[], int N){
	for(int i=0;i<N;i++){
		cout<<"B20DCCN"<<"0"<<(i+1)/10<<(i+1)%10<<" ";
		cout<<ds[i].name<<" ";
		cout<<ds[i].malop<<" ";
		cout<<ngay(ds[i].birth)<<" ";
		cout<<fixed<<setprecision(2)<<ds[i].diem;
		cout<<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
