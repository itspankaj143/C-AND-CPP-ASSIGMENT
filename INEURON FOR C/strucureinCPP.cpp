#include <iostream>
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
    struct Book b1 = {1, "CPP", 340.0f};
    display(b1);
    struct Book b2;
    b2 = input();
    display(b2);
    return 0;
}
void display(struct Book b)
{
    cout << "\n"
         << b.bookid << " " << b.title << " " << b.price;
}

struct Book input()
{
    struct Book b;
    cout << "\n Enter bookid,title and price of book";
    cin >> b.bookid;
    
    // fflush(stdin);
    // fgets(b.title, 20, stdin);

    cin.ignore();
    cin.getline(b.title,20);

    cin >> b.price;
    return b;
}