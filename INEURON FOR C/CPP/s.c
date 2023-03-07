// TODO:  count the string

// #include <stdio.h>
// int main()
// {
//     char str[] = "FFFJHHBHVYYTT";
//     char b = 'h';
//     int i, count = 0;
//     for (i = 0; str[i]; i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] = str[i] + 32;
//         }
//     }
//     printf(" %s", str);
//     return 0;
// }

// TODO: count the string while charcter

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[] = "Pankaj";
//     char b = 'a';
//     int i = 0, count = 0;
//     while (a[i])
//     {
//         i++;
//         if (a[i] == b)
//             count++;
//     }
//     printf("%d ", count);
//     return 0;
// }

// TODO:  Reverse the string

// #include <stdio.h>
// int main()
// {
//     char str[20], ch;
//     int len, i;

//     printf("Enter a strings");
//     // fgets(str,20,stdin);
//     gets(str);
//     for (len = 0; str[len]; len++)
//         ;
//     {
//         for (i = 0; i < len / 2; i++)
//         {
//             ch = str[i];
//             str[i] = str[len - 1 - i];
//             str[len - 1 - i] = ch;
//         }
//     }
//     printf("reverse is %s", str);
//     return 0;
// }

// TODO: Upper case or Lower Case

// #include<stdio.h>
// int main()
// {
//     char ch[20];
//     int i;
//     printf("Enter a string");
//     fgets(ch,20,stdin);
//     for(i=0;ch[i];i++){
//         if(ch[i]>='a'&&ch[i]<='z'){
//             ch[i]=ch[i]-32;
//         }
//     }
//     printf("%s",ch);
//     return 0;
// }

// TODO:   palindrome for strings

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20];
//     int l, i;
//     printf("Enter a string");
//     gets(str);
//     l = strlen(str);

//     for (i = 0; i < l / 2; i++)
//     {
//         if (str[i] != str[l - 1 - i])
//         {
//             printf("Not a palindorme");
//             break;
//         }
//     }
//     if (i == l / 2)
//     {
//         printf("palindrome");
//     }

//     return 0;
// }

// TODO: count vowel in strings

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[] = "Pankaj";
//     char b = 'a';
//     int i = 0, count = 0;
//     while (a[i])
//     {
//         i++;
//         if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
//             count++;
//     }
//     printf("%d ", count);
//     return 0;
// }

// TODO: revserse the string

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], temp;
    int i, len;
    printf("Enter a strings\n");
    fgets(str, 20, stdin);
    len = strlen(str);
    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("Reverse is %s ", str);
}