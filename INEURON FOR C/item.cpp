#include<iostream>
using namespace std;
class Item
{
    public:
    int a ,b;
    static int k;

};
int Item::k;
int main()
{
    Item i1,i2;
    i1.a=5;
    cout<<"a="<<i2.a;
    // i1.k=4;
    cout<<"\nk="<<i2.k;
    return 0;


}