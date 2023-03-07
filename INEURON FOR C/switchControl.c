#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, a, b;
    while (1)
    {
        printf("\n 1. Addition");
        printf("\n 2. Subtraction");
        printf("\n 3. Multilplication");
        printf("\n 4. Division");
        printf("\n 5 Exit");
        printf("\nEnter Your Choice\n");
        scanf("%d", &x);
        // printf("\n 5. Exit");
        switch (x)
        {
        case 1:
            printf("Enter Two Number");
            scanf("%d%d", &a, &b);
            printf("Sum of two number=%d", a + b);
            break;
        case 2:
            printf("Enter Two Number");
            scanf("%d%d", &a, &b);
            printf("Sub of two number=%d", a - b);
            break;
        case 3:
            printf("Enter Two Number");
            scanf("%d%d", &a, &b);
            printf("Mul of two number=%d", a * b);
            break;
        case 4:
            printf("Enter Two Number");
            scanf("%d%d", &a, &b);
            printf("Div of two number=%d", a / b);
            break;
        case 5:
            exit(0);
            break;

        default:
            break;
        }
    }
}