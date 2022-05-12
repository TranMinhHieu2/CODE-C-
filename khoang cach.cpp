#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		double a,b,x,y;
		double k;
		cin>>a>>b>>x>>y;
		k=sqrt(pow(a-x,2)+pow(b-y,2));
		cout<<fixed<<setprecision(4)<<k<<endl;
		
	}
} 
