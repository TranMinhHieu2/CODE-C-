#include <bits/stdc++.h>
using namespace std;
struct PhanSo
{
	long long a,b;
};
PhanSo t;
void nhap(PhanSo &x){
	cin>>x.a>>x.b;	
}
PhanSo rutgon(PhanSo &t){
	long gcd=__gcd(t.a,t.b);
	t.a=t.a/gcd;
	t.b=t.b/gcd;
	return t;
}
PhanSo tong(PhanSo &p, PhanSo &q){
	if(p.b<q.b) swap(q,p);
	if(p.b%q.b==0){
		long l=p.b/q.b;
		t.a=p.a+q.a*l;
		t.b=p.b+q.b*l;
		return t;
	}
	else if(p.b%q.b!=0){
		long long lcm=p.b*q.b/__gcd(p.b,q.b);
		t.a=p.a*(lcm/p.b)+q.a*(lcm/q.b);
		t.b=lcm;
		rutgon(t);
		return t;
	}
}
void in(PhanSo &t){
	cout<<t.a<<"/"<<t.b<<endl;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

