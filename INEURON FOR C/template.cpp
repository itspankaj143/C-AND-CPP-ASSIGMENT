#include<iostream>
using namespace std;
template <class t,class f,class p>
p add(t x,f y)
{ 
    return x+y;
}
int main()
{
    float sum1;
    int sum2;
   sum1=add<float,int,float>(3.5,2);
   sum2=add<int,int,int>(3,4);

    cout<<"addition of two number is = "<<sum1<<endl;
    cout<<"       addition of two number is          = "<<sum2;

    return 0;
}