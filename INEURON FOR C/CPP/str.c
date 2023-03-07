// #include <stdio.h>
// int main()
// {
//     char str[50];

//     printf("Enter a Strings\n");
//     fgets(str, 50, stdin);
//     printf("Your Name is =%s ", str);
//     return 0;
// }

// Handling MUltiple strings

#include <stdio.h>
int main()
{
    char str[5][10];
    int i;
    printf("Enter 5 City Name\n");
    for (i = 0; i <= 4; i++)
    {
        fgets(str[i], 10, stdin);
    }
    printf("Display 5 city Name\n");
    for (i = 0; i <= 4; i++)
    {
        printf("%s ", str[i]);
    }
    return 0;
}