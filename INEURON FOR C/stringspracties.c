#include<stdio.h>
int main()
{
    char s[5][10]={"Pune","Patna","Gopalganj","Nagpur","Mumbai"};

    // char *s[]={"Pune","Patna","Gopalganj","Nagpur","Mumbai"};
    int i;
    for(i=0;i<=4;i++)
    {
        printf("%s\n",s[i]);
    }
    return 0;
}