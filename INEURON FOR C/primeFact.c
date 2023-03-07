#include<stdio.h>
void primeFact(int n);
int main()
{
    primeFact(25);
    return 0;
}
void primeFact(int n)
{
    int i;
    for(i=2;n!=1;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            printf("%d ",i);
        }
    }
}