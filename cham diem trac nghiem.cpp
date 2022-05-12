#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();//ko chay luon
	while (n--){
	string a1("ABBADCCABDCCABD");//ket thuc laf \n
	string a2("ACCABCDDBBCDDBB");
	float count=0;
	string s, s1;
	getline(cin,s);//nhap tat ca bao gom ca dau cach
	s1=s.substr(0,3);//do rong tu 0 den 3 laf 123
	s.erase(remove(s.begin(),s.end(),' '),s.end());
	//lenh s.erase(bat dau,ket thuc) lenh xoa tu bd den kt
	//thao tac lenh voi chuoi luoon co s.lenh VD s.erase,s.begin
	//tach ra dau cach sau do xoa chung
	s.erase(s.begin(),s.end()-15);//xoa ma de
	if(s1[2]=='1')//so sanh so cuoi ma de voi de cho
		for(int i=0;i<s.size();i++)
			if(s[i]==a1[i]) count++;
	if(s1[2]=='2')
		for(int i=0;i<s.size();i++)
			if(s[i]==a2[i])	count++;
	float result=(10*count)/15;
	cout<<fixed<<setprecision(2)<<result<<endl;				
	}
}
/*int main()
{ 
	int t;cin>>t;
	cin.ignore(); 
	while(t--)
	{
		string b1("...ABBADCCABDCCABD");
		string b2("...ACCABCDDBBCDDBB");
		float  count =0; 
		string s;getline(cin,s); 
	
		s.erase(remove(s.begin(),s.end(),' '),s.end()); 
		
		if(s[2]=='1')  
			for(int i=3;i<s.size();i++)
			  	if(s[i]==b1[i])count++; 
		if(s[2]=='2') 
			for(int i=3;i<s.size();i++)
			  	if(s[i]==b2[i])count++; 
		float result=(10*count)/15; 
		cout<<setprecision(2)<<fixed<<result<<endl; 
	} 
}
dang rut gon hon*/

