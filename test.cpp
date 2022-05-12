#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
	int stt;
	string name, malop, birth;
	float diem;
};
void nhap(SinhVien ds[], int n){
	for(int i=0;i<n;i++){
		ds[i].stt=i+1;
		scanf(" ");
		getline(cin,ds[i].name);
		getline(cin,ds[i].malop);
		getline(cin,ds[i].birth);
		cin>>ds[i].diem;
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
void sapxep(SinhVien ds[], int N){
	for(int i=0;i<N;i++){
		transform(ds[i].name.begin(),ds[i].name.end(),ds[i].name.begin(),::tolower);
        stringstream iss(ds[i].name);
        while(iss>>ds[i].name)
        {
            ds[i].name[0]-=32;
        }    
	}
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if(ds[i].diem<ds[j].diem)
				swap(ds[i],ds[j]);
		}
	}
}
void in(SinhVien ds[], int N){
	sapxep(ds, N);
	for(int i=0;i<N;i++){
		cout<<"B20DCCN0"<<(ds[i].stt+1)/10<<(ds[i].stt+1)%10<<" ";
		cout<<ds[i].name<<" "<<ds[i].malop<<" "<<ngay(ds[i].birth)<<" ";
		cout<<fixed<<setprecision(2)<<ds[i].diem<<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
} 
