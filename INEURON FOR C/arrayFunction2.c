#include <stdio.h>
void fun1(int x);
void fun2(int *p);
void fun3(int *p, int n);

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    fun1(a[2]);
    fun2(&a[3]); 
    fun3(a, 5);
}
void fun1(int x)
{
    printf("%d\n", x);
}

void fun2(int *p)
{
    printf("%d\n", *p);
    *p = 10;
}

void fun3(int *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d %d %d\n", *(p + i), p[i], *p);
    //     printf("%d\n"*p);
    //     p++;
}