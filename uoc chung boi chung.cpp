#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
    cin>>n;
    while(n--){
    	long a,b;
    	cin>>a>>b;
    	int gcd=__gcd(a,b);
    	long long lcm=a*b/gcd;
    	cout <<lcm<<" "<<gcd<<endl;
	}
}
