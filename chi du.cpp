#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while (n--){
		int m,a;
		cin>>a>>m;
		for(int i=0;i<m;i++){
			if(fmodf(a*i,m)==1){
				cout<<i<<endl;
				break;
			}
			else if(i==m-1) cout<<"-1"<<endl;//phai them if(i==m-1) thi den khi chay den m-1 moi dc in ra -1
		}
	}
}
