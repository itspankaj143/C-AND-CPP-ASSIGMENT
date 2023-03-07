// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20];
//     input(str, 20);
//     display(str);
//     return 0;
// }
// void input(int *p, int size)
// {
//     int l;
//     printf("Enter strings");
//     fgets(*p, 20, stdin);
//     l = length(*p);
//     printf("%d ", l);
// }
// void display(char *p)
// {
//     int i;
//     for (i = 0; p[i]; i++)
//         ;
//     return i;
// }
#include <stdio.h>
#include <string.h>
int main()
{
    struct Book
    {
        int bookid;
        char title[20];
        float price;
    };
    struct Book b[5];
    int i, j;
    printf("Enter Bookid,title and Price");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &b->bookid);
        fflush(stdin);
        fgets(b->title, 20, stdin);
        b->title[strlen(b->title) - 1] = '\0';
        scanf("%f", &b->price);
    }

    for (int j = 0; j <= 4; j++)
    {

        printf("\n%d %s %f", b->bookid, b->title, b->price);
    }
    return 0;
}