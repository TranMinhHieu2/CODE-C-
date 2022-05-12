#include <iostream>
#include <cmath>
using namespace std;
int ktra (int n){
	while(n>0){
		int x=n-86;
		if(x%100==0){
			return true;
		}
		return false;
	}
} 
int main(){
	int a;
	cin >> a;
	while (a>0){
		int t;
		cin >> t;
		if(ktra(t)){
			cout <<"1"<< endl;
		}
		else cout<< "0"<< endl;
		a--;
	}
}
