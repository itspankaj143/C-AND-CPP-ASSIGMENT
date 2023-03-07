#include<iostream>
#include<cstring>
using namespace std;
struct Book
{
    int bookid;
    char title[20];
    float price;
};
struct Book input();
void display(struct Book);
int main()
{
    struct Book b1={1,"C WITH MYSIRG",500.00f};
    display(b1);
    struct Book b2;
    b2.bookid=2;
    strcpy(b2.title,"JAVA");
    b2.price=600.0f;
    display(b2);

    struct Book b3;
    b3=input();
    display(b3);
    



}
struct Book input()
{
    struct Book b;
    cout<<"\nEnter Bookid, title and Price of book";
    cin>>b.bookid;
    fflush(stdin);
    fgets(b.title,20,stdin);
    cin>>b.price;
    return b;

}
void display(struct Book b)
{
    cout<<"\n"<<b.bookid<<" "<<b.title<<" "<<b.price;

}