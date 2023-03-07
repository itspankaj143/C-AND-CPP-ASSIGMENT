#include<stdio.h>
struct Book
{
    int Bookid;
    char title[20];
    float price;
}
int main()
{
    // During Declaration initization
    struct Book b1={1,"cpp",450.0f};
    // After declartion value initization
    struct Book b2;
    b2.Bookid=2;
    strcpy(b2.title,'java');
    b2.price=500.0f;
    // user input 
    struct Book b3;
    printf("Enter Bookid,title,and price of Book\n");
    scanf("%d",&b3.Bookid);
    fflush(stdin);
    fgets(b3.title,20,stdin);
    scanf("%f",&b3.price);

    //
    // structure Array
    // struct Book b4[5];
    // int i;
    // for(i=0;i<=4;i++){
    //     scanf("%d",&b4[i]);
    // }
    // for(i=0;i<=4;i++){
    //     printf("%d",b4[i]);
    // }

    return 0;
}