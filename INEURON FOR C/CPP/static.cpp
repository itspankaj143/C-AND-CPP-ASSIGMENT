#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b,c;
    public:
    void setData(int x,int y,int z)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"Real="<<a<<"+"<<"Imag="<<b<<endl;
        
    }
    void showData(Complex c)
    {
        cout<<a<<"+"<<b<<endl;
        cout<<c.a<<"+"<<c.b<<endl;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }

};

// void f1()
// {
//     int x=0;
//     static int y;
//     x++;
//     y++;
//     cout<<"endlx="<<x<<"y="<<y;
// }
int main()
{
    Complex c1,c2,c3;
    c1.setData(3,4,4);
    c2.setData(5,3,5);
    // c1.showData();
    // c2.showData();
    c3=c1.add(c2);
    c3.showData();
    c1.showData(c2);
    // f1();
    int l=sizeof(c1);
    cout<<l;
    // f1();
    return 0;
}