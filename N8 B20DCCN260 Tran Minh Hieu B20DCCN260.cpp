#include<bits/stdc++.h>
using namespace std;

class honso 
{
    private:
        int nguyen, tu, mau;
    public: 
        honso(int nguyen, int tu ,int mau )
        {
            nguyen = nguyen;
            tu = tu;
            mau = mau;
        }
        void nhapbp()
        {
            cin>>nguyen>>tu>>mau;
        } 
        void rutgon()
        {
            tu = nguyen * mau + tu;
            long long gcd=__gcd(tu,mau);
            tu=tu/gcd;
            mau=mau/gcd;
        }
        void xemmh()
        {
            if(tu<mau)
                cout<<tu<<"/"<<mau<<endl;
            else 
                {
                    nguyen = tu % mau;
                    cout<<nguyen<<" "<<tu-nguyen*mau<<"/"<<mau<<endl;
                }
        }
        friend void ps(int &,int &,int &);
        friend void hs(int &,int &,int &);
		friend honso operator * (honso a,honso b); 
        friend honso operator / (honso a,honso b);
};
void ps(int &x,int &y,int &z)
{
    y= x * z + y;
}

void hs(int &x,int &y,int &z)
{
    if( y > z )
    {
        x = y % z;
        y = y - x * z;
    }
}
honso operator * (honso a,honso b)
{
    honso c;
    ps(a.nguyen,a.tu,a.mau);
    ps(b.nguyen,b.tu,b.mau);
    c.tu = a.tu * b.tu;
    c.mau = a.mau * b.mau;
    c.rutgon();
    return c;
}
honso operator / (honso a,honso b)
{
    honso c;
    ps(a.nguyen,a.tu,a.mau);
    ps(b.nguyen,b.tu,b.mau);
    c.tu = a.tu * b.mau;
    c.mau = a.mau * b.tu;
    c.rutgon();
    return c;
}
int main() 
{
    honso a,b(2,3,5),c;
    a.nhapbp();a.rutgon();a.xemmh();
    c = a * b;c.xemmh();c = a/b; c.xemmh();
}

