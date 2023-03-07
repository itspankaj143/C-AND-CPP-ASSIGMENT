#include <stdio.h>
#include <string.h>
struct Book
{
    int bookid;
    char title[20];
    float price;
};
void display(struct Book b)
{
    printf("\n %d %s %f", b.bookid, b.title, b.price);
}
struct Book input()
{
    struct Book b;
    printf("\n Enter bookid,title and price of a book:\n");
    scanf("%d", &b.bookid);
    fflush(stdin);
    fgets(b.title, 20, stdin);
    b.title[strlen(b.title) - 1] = '\0';
    scanf("%f", &b.price);
    return b;
}
void sortByPrice(struct Book b[], int size)
{
    int r, i;
    struct Book temp;
    for (r = 1; r <= size-1; r++)
    {
        for (i = 0; i <= size-1-r; i++)
        {
            if (b[i].price > b[i + 1].price)
            {
                temp = b[i];
                b[i] = b[i + 1];
                b[i + 1] = temp;
            }
        }
    }
}
int main()
{
    // struct Book b1={1,"CPP",450.0f};
    // display(b1);

    // struct Book b2;
    // b2.bookid=2;
    // strcpy(b2.title,"Java");
    // b2.price=500.0f;
    // display(b2);

    // struct Book b3;
    // b3=input();
    // display(b3);

    // struct Book b4[5];
    // int i;
    // for (i = 0; i <= 4; i++)
    // {
    //     b4[i] = input();
    // }
    // for (i = 0; i <= 4; i++)
    // {
    //     display(b4[i]);
    // }


    struct Book b5[5];
    int j;
    for (j = 0; j <= 4; j++)
    {
        b5[j] = input();
    }
    sortByPrice(b5, 5);
    for (j = 0; j <= 4; j++)
    {
        display(b5[j]);
    }

    return 0;
}