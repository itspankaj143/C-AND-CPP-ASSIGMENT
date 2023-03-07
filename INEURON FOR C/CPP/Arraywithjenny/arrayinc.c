// #include <stdio.h>
// int main()
// {
//     int a[5], i;
//     printf("Enter 5 Elements\n");
//     for (i = 0; i <= 4; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Display the Elemets:\n");
//     for (i = 0; i <= 4; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

// Reverse of the Array Elements

// #include <stdio.h>
// int main()
// {
//     int a[5], i;
//     printf("Enter the Elemets");
//     for (i = 0; i <= 4; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Reverse of Arrays:\n");
//     for (i = 4; i >= 0; i--)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

// average of 10 students
// #include <stdio.h>
// int main()
// {
//     int a[10], i, sum = 0;
//     float average;
//     printf("Enter 10 student Marks:\n");
//     for (i = 0; i <= 9; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i <= 9; i++)
//     {
//         sum = sum + a[i];
//     }
//     average = sum / 10.0;
//     printf("Average of 10 student is %f ", average);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a[10], i, e = 0, o = 0;
    printf("Enter 10 Elements:\n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 9; i++)
    {
        if (a[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("Even NUMber is %d\n", e);
    printf("odd NUMber is %d ", o);
    return 0;
}