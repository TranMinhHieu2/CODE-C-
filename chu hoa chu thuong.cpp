#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		char x;
		cin>>x;
		if(x>64&&x<91) cout<<(char)(x+32)<<endl;
		if(x>96&&x<123) cout<<(char)(x-32)<<endl;
	}
} 
