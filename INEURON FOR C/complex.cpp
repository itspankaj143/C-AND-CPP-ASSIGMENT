#include<iostream>
using namespace std;
class Complex
{
    int real;
    int img;
    public:
    void set(int r,int i)
    {
        real=r;
        img=i;
    }
    void get(Complex c)
    {
        cout<<real<<"+"<<img<<"i"<<endl;
        cout<<c.real<<"+"<<c.img<<"i"<<endl;
    }
    void  add(Complex c)
    {
        cout<<real+c.real<<"+"<<img+c.img<<"i";
    }

};
int main()
{
    Complex c1,c2;
    c1.set(2,5);
    c2.set(3,7);
    // c1.get();
    // c2.get();
    c1.get(c2);
    c1.add(c2);
    return 0;
}