#include<bits/stdc++.h>
using namespace std;
struct DanhSach
{
	string masv, name, malop, email, firm;
	int stt;
};
void nhap(DanhSach list[],int n){
	for(int i=0;i<n;i++){
		list[i].stt=i+1;
		cin>>list[i].masv;
		scanf(" ");
		getline(cin,list[i].name);
		cin>>list[i].malop>>list[i].email>>list[i].firm;
	}
}
void kq(DanhSach list[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			string s1=list[i].name;
			string s2=list[j].name;
			if(s1.compare(s2)>0) 
				swap(list[i],list[j]);
		}
	}
}
void in(DanhSach list[],string q[], int n, int k){
	kq(list,n); 
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			if(q[j].compare(list[i].firm)==0){
				cout<<list[i].stt<<" "<<list[i].masv<<" "<<list[i].name<<" ";
				cout<<list[i].malop<<" "<<list[i].email<<" "<<list[i].firm<<endl;
			}
		}
	}
}
int main(){
	int n; cin>>n;
	struct DanhSach list[n];
	nhap(list,n);
	int k; cin>>k;
	string q[k];
	for(int i=0;i<k;i++) 
		cin>>q[i];
	in(list,q,n,k);
} 
