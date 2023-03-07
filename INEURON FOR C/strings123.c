#include<stdio.h>
int main()
{
    // character acessing one by one

    // char str[20]={'B','H','O','P','A','L'};
    // int i;
    // for(i=0;i<=str[i];i++){
    //     printf("%c",str[i]);
    // }



    // whole strings to be prints

    // char str[20]={'B','H','O','P','A','L'};
    //     printf("%s",str);

    // userInput

    // char str[20];
    // printf("Enter your name\n");
    // scanf("%s",str);
    // printf("%s",str);

    // char str[20];
    // printf("Enter your name\n");
    // gets(str);
    // printf("%s",str);

     char str[20];
    printf("Enter your name\n");
    fgets(str,20,stdin);
    printf("%s",str);
    return 0;
}