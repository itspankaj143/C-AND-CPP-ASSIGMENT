#include<stdio.h>
#include<string.h>

struct Book
{
    int bookid;
    char title[20];
    float price;
};
void display(struct Book b)
{
    printf("\n %d %s %f",b.bookid,b.title,b.price);
}
struct Book input()
{
    struct Book b;
    printf("\nEnter bookid,title and price of book\n");
    scanf("%d",&b.bookid);
    fflush(stdin);
    fgets(b.title,20,stdin);
    scanf("%f",&b.price);
    return b;
}
int main()
{
    struct Book b1={1,"CPP",500.0f};
    display(b1);

    struct Book b2;
    b2.bookid=2;
    strcpy(b2.title,"java");
    b2.price=300.9;
    display(b2);

    struct Book b3;
    b3=input();
    display(b3);

    return 0;
}