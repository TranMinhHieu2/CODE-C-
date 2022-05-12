#include <bits/stdc++.h>
using namespace std;
int demso(string dayso){
	stringstream s(dayso);
	int count =0;
	while(s >> dayso) count++;
	return count;
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int n=demso(s);
		int j=0,count=0; 
		string a[n];
		stringstream x(s);
		while(x>>s) a[j++]=s;
		for(int i=0;i<n;i++){
			if(atoi(a[i].c_str())%2==0)
				count ++;
			else count --;
		}
		if(n%2==0&&count>0||n%2==1&&count<0)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

