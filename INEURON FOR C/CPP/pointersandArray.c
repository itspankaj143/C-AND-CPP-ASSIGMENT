#include <stdio.h>
void input(int *p, int size);
void display(int *p, int size);
int main()
{
    int arr[20];
    input(arr, 20);
    display(arr, 20);
    return 0;
}
void input(int *p, int size)
{
    printf("Enter 10 Numbers");
    int i;
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", p + i);
    }
}
void display(int *p, int size)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", *(p + i));
    }
}