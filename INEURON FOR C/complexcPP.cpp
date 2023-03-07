#include<iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int img;
    public:
    void setData(int r,int i)
    {
        real=r;
        img=i;
    }
    void showData(Complex c)
    {
        cout<<real<<"+"<<img<<"i"<<endl;
        cout<<c.real<<"+"<<c.img<<"i"<<endl;
    }
    void add(Complex c)
    {
        cout<<"COMPLEX OF TWO NUMBER: "<<real+c.real<<"+"<<img+c.img<<"i";
    }
};
int main()
{
    Complex c1,c2;
    c1.setData(2,3);
    c2.setData(3,4);
    // c1.showData();
    // c2.showData();
    c1.showData(c2);
    c1.add(c2);
    return 0;
}