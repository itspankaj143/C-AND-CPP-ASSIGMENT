// #include<stdio.h>
// int main(){
//     char str[20]={'P','A','N','K','A','J','K','U','M','A','R'};
//     printf("%s",str);

//     /*
//     int i;
//     for(i=0;str[i];i++)
//     printf("%c ",str[i]);
//     */

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char str[10] = "BHOPAL";
//     int i;
//     for (i = 0; str[i]; i++);
//     printf("Lenght of Given String is :-%d", i);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char str[20];
//     printf("Enter your name\n");
// scanf("%s",str);
// gets(str);
//     fgets(str,20,stdin);

//     printf("%s",str);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[20];
//     int l;
//     printf("Enter your name\n");
//     fgets(str,20,stdin);
//     l=strlen(str)-1;
//     printf("%d",l);
//     return 0;

// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[20];
//     printf("Enter your name\n");
//     fgets(str,20,stdin);
//     strupr(str);
//     printf("%s",str);

//     return 0;

// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[20];
//     printf("Enter your name\n");
//     fgets(str,20,stdin);
//     strlwr(str);
//     printf("%s",str);

//     return 0;

// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[20];
//     printf("Enter your name\n");
//     fgets(str,20,stdin);
//     strrev(str);
//     printf("%s",str);

//     return 0;

// }

// #include <stdio.h>
// int main()
// {
//     char str[4][10] = {"pune", "bhopal", "bengaluru", "patna"};
//     int i;
//     for (i = 0; i <= 3; i++)
//     {
//         printf("%s\n", str[i]);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i = 0, n;
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
//     int i, largest = 0, s_largest = 0, n;
//     largest = arr[0];
//     for (i = 1; i <10; i++)
//     {
//         if (arr[i] <largest)
//         {
//             s_largest = largest;
//             largest = arr[i];
//         }

//         if (arr[i] < s_largest)
//         {
//             s_largest = arr[i];
//         }
//     }
//     printf("Largest value is %d\n", largest);
//     printf("S_largest value is %d\n", s_largest);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char str[10] = {'P', 'A', 'N', 'K', 'A', 'J', '\0'};

//     printf("%s",str);

// int i;
// for(i=0;i<=9;i++){
//     printf("%c ",str[i]);
// }

// int i;
// for (i = 0; str[i]; i++){
// str[i] += 1;
// printf("%c ", str[i]);
// }
//    printf("%s",str);
// }

// #include<stdio.h>
// int main(){
//     char str[20];
// int i;
// printf("Enter your name\n");
// scanf("%s",str);

// for(i=0;str[i];i++){
//     scanf("%c",str[i]);
// }
// for(i=0;str[i];i++)
// printf("%c",str[i]);
//     printf("%s",str);
// }

// #include<stdio.h>
// int main(){
//     char str[20];
//     printf("enter your name\n");
//     fgets(str,20,stdin);
//     printf("%s",str);

// }

// #include <stdio.h>
// int main()
// {
//     char str[7];
//     int i;
//     printf("Enter your name\n");
//     fgets(str, 7, stdin);
//     for (i = 0; str[i]; i++)
//     {
//         printf("%c ", str[i]);
//     }
// }