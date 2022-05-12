/*#include <bits/stdc++.h>
using namespace std;
int fibonaci(int n){
	if(n==1||n==2) 
		return 1;
	return fibonaci(n-1)+fibonaci(n-2);
}
int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fibonaci(n)<<endl;
	}
}
ra tle vì code chay lau 
cach 2*/

#include <bits/stdc++.h>
using namespace std;
long long fibonaci(int n){
	long long a1=1, a2=1;
	if(n==1||n==2)
		return 1;
	long long a=0;
	int i=3; 
	while(i<=n){
		a=a1+a2;
		a1=a2;
		a2=a;
		i++;
	}
	return a;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fibonaci(n)<<endl;
	}
}
