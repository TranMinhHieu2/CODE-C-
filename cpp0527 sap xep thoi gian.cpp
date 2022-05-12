#include <bits/stdc++.h>
using namespace std;
struct ttime
{
	int hour, minute, sec;
};
void nhap(ttime &t){
	cin>>t.hour>>t.minute>>t.sec;
}
void tgian(ttime t[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			long long a=t[i].hour*3600+t[i].minute*60+t[i].sec;
			long long b=t[j].hour*3600+t[j].minute*60+t[j].sec;
			if(a>b) swap(t[i], t[j]);
		}
	}
}
void in(ttime t[], int n){
	tgian(t,n);
	for(int i=0;i<n;i++){
		cout<<t[i].hour<<" "<<t[i].minute<<" "<<t[i].sec<<endl;
	}
}
int main (){
	int n; cin>>n;
	struct ttime t[n];
	for(int i=0;i<n;i++){
		nhap(t[i]);
	}
	in(t,n);
} 

