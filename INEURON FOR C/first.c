// #include<stdio.h>
// int main(){
//     printf("\"MYSIRG\"");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int r;
//     float area;
//     printf("Enter radius of a circle\n");
//     scanf("%d",&r);
//     area=3.14*r*r;
//     // printf("Area of Circle is %f",area);
//     printf("Area of Circle is %.2f",area);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x=printf("pankaj\n");
//     printf("Length is:- %d",x);
//     return 0;
// }

/*
#include<stdio.h>
int main(){
    printf("%%d");
    return 0;
}
#include<stdio.h>
int main(){
    char a='%',b='d';
    printf("%c%c",a,b);
    return 0;
}
#include<stdio.h>
int main(){
    printf("%c%c",'%','d');
    return 0;
}
*/
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a number\n");
//     scanf("%d",&x);
//     // a=x%10;
//     // printf("Unit digit is %d",a);
//     printf("Unit digit is %d",x%10);
//     return 0;
// }

//  withoutlastdigit

// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a number\n");
//     scanf("%d",&x);

//     printf("Unit digit is %d",x/10);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int day,month,year;
//     printf("Enter Date in DD/MM/YYYY Format\n");
//     scanf("%d/%d/%d",&day,&month,&year);
//     printf("Day-%d, Month-%d, Year-%d",day,month,year);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int hour,mintinus;
//     printf("Enter Time in HH:MM Format\n");
//     scanf("%d:%d",&hour,&mintinus);
//     printf("%d Hour and %d Minutes",hour,mintinus);
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     printf("//");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char a='/',b='/';
//     printf("%c%c",a,b);
//     return 0;
// }

// #include<stdio.h>
// int main(){

//     int x,rem=0,sum=0;
//     printf("Enter a number\n");
//     scanf("%d",&x);

//     rem=x%10;
//     sum=sum+rem;
//     x=x/10;

//     rem=x%10;
//     sum=sum+rem;
//     x=x/10;

//     rem=x%10;
//     sum=sum+rem;
//     x=x/10;

//     printf("Sum of digit is:-%d",sum);

// }

// #include <stdio.h>
// int main()
// {
//     char c = 'M';
//     if ((97 <= c) && (c<= 122))
//         printf("lower case");
//     if ((65 <= c) && (c<= 90))
//         printf("upper case");
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char c = 'M';
//     if ((c >= 97) && (c <= 122))
//         printf("lower case");
//     if ((c >= 65) && (c<= 90))
//         printf("upper case");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter a character\n");
//     scanf("%c",&ch);
//     if(ch>='a'&&ch<='z')
//     printf("Lower Alphabet");
//     else if(ch>='A'&&ch<='Z')
//     printf("Upper Alphabet");
//     else if(ch>='0'&& ch<='9')
//     printf("Digit");
//     else
//     printf("Special Character");
//     return 0;

// }

// #include <stdio.h>
// int main()
// {
//     int x, a, b;
//     while (1)
//     {
//         printf("\nMenu Driven Program\n");
//         printf("\n 1. ADDITION");
//         printf("\n 2. SUBTRACTION");
//         printf("\n 3. MULTIPLICATION");
//         printf("\n 4. DIVISON");
//         printf("\n 5. MODULUS");
//         printf("\n 6. Exit");

//         printf("\nEnter your choice\n");
//         scanf("%d", &x);
//         switch (x)
//         {
//         case 1:
//             printf("Enter two Number\n");
//             scanf("%d%d", &a, &b);
//             printf("Sum is %d", a + b);
//             break;
//         case 2:
//             printf("Enter two Number\n");
//             scanf("%d%d", &a, &b);
//             printf("Subtract is %d", b - a);
//             break;
//         case 3:
//             printf("Enter two Number\n");
//             scanf("%d%d", &a, &b);
//             printf("Multi is %d", a * b);
//             break;
//         case 4:
//             printf("Enter two Number\n");
//             scanf("%d%d", &a, &b);
//             printf("Divis is %d", b / a);
//             break;
//         case 5:
//             printf("Enter two Number\n");
//             scanf("%d%d", &a, &b);
//             printf("Modulus is %d", b % a);
//             break;
//         case 6:
//             break;

//         default:
//             printf("Number is INVALID");
//         }
//         if (x == 6)
//             break;
//     }end of while
// }

// #include <stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int x, a, b;
//     while (1)
//     {
//         printf("\nMenu Driven Program\n");
//         printf("\n 1. ADDITION");
//         printf("\n 2. SUBTRACTION");
//         printf("\n 3. MULTIPLICATION");
//         printf("\n 4. DIVISON");
//         printf("\n 5. MODULUS");
//         printf("\n 6. Exit");

//         printf("\nEnter your choice\n");
//         scanf("%d", &x);
//         switch (x)
//         {
//         case 1:
//             printf("Enter two Number\n");
//             scanf("%d%d", &a, &b);
//             printf("Sum is %d", a + b);
//             break;
//         case 2:
//             printf("Enter two Number\n");
//             scanf("%d%d", &a, &b);
//             printf("Subtract is %d", b - a);
//             break;
//         case 3:
//             printf("Enter two Number\n");
//             scanf("%d%d", &a, &b);
//             printf("Multi is %d", a * b);
//             break;
//         case 4:
//             printf("Enter two Number\n");
//             scanf("%d%d", &a, &b);
//             printf("Divis is %d", b / a);
//             break;
//         case 5:
//             printf("Enter two Number\n");
//             scanf("%d%d", &a, &b);
//             printf("Modulus is %d", b % a);
//             break;
//         case 6:
//            exit(0);

//         default:
//             printf("Number is INVALID");
//         }

//     }
// }

// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     while (i <= 5)
//     {
//         printf("MYSIRG\n");
//         i++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=10)
//     {
//         printf("First 10 Natural Number:-%d\n",i);
//         i++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i=10;
//     while(i>=1){
//         printf("%d\n",i);
//         i--;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     while (i <= 10)
//     {
//         printf("%d\n", 11 - i);
//         i++;
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     while (i <= 20)
//     {
//         if (i & 1)
//         {
//             printf("%d\n", i);
//             i += 2;
//         }
//     }
// return 0;
// }
// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=10){
//         printf("%d\n",2*i-1);
//         i++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i=19;
//     while(i>=1){
//         if(i%2){
//             printf("%d\n",i);
//             i-=2;
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=10){
//         printf("%d\n",21-2*i);
//         i++;
//     }
//     return 0;

// }
// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=10){
//         printf("%d\n",2*i);
//         i++;
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i=1;
//     while (i<=20)
//     {
//         if(i%2==0){
//             printf("%d\n",i);
//             // i++;
//         }
//         i++;

//     }
//     return 0;

// }
// #include <stdio.h>
// int main()
// {
//     int i = 1, fact = 1;
//     while (i <= 10)
//     {
//         fact = fact * i;
//         i++;
//     }
//     printf("Factorial is:-%d\n", fact);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i = 1, fact = 1,n;
//     printf("Enter a number\n");
//     scanf("%d",&n);
//     while (i <= n)
//     {
//         fact = fact * i;
//         i++;
//     }
//     printf("Factorial is:-%d\n", fact);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, n;
//     printf("Enter a number\n");
//     scanf("%d", &n);
//     for (i = 2; i <= n/2; i++)
//     {
//         if (n % i == 0)
//         {
//             break;
//         }
//     }
//     if (i == n/2+1)
//     {
//         printf("PRIME");
//     }
//     else
//     {
//         printf("NOT PRIME");
//     }
//     return 0;
// }

// PATTERN PRINTING LOGIC

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j<=i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=9;j++){
//             if(j>=6-i&&j<=4+i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, lines;
//     printf("Enter Number of lines you want to print\n");
//     scanf("%d", &lines);

//     for (i = 1; i <= lines; i++)
//     {
//         for (j = 1; j <= 2 * lines - 1; j++)
//         {
//             if (j >= lines + 1 - i && j <= lines - 1 + i)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, lines,k;
//     printf("Enter Number of lines you want to print\n");
//     scanf("%d", &lines);

//     for (i = 1; i <= lines; i++)
//     {
//         k=1;
//         for (j = 1; j <= 2 * lines - 1; j++)
//         {
//             if (j >= lines + 1 - i && j <= lines - 1 + i)
//             {
//                 printf("%3d",k);
//                 if(j<lines)
//                    k++;
//                 else
//                 k--;
//             }
//             else
//             {
//                 printf("   ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//  ARRAY IN C

// #include <stdio.h>
// int main()
// {
//     int ary[10], i, sum = 0;
//     float average;
//     printf("Enter 10 number\n");
//     for (i = 0; i <= 9; i++)
//     {
//         scanf("%d", &ary[i]);
//     }
//     for (i = 0; i <= 9; i++)
//     {
//         sum = sum + ary[i];
//         average = sum / 10.0;
//     }
//     printf("Average of 10 is %.2f", average);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num[10],i ,se=0,so=0;
//     printf("Enter 10 number\n");
//     for(i=0;i<=9;i++){
//         scanf("%d",&num[i]);
//     }
//     for(i=0;i<=9;i++){
//         if(num[i]%2==0){
//             se=se+num[i];
//         }
//         else{
//             so=so+num[i];
//         }

//     }
//     printf("Sum of all EVEN is %d\n",se);
//     printf("Sum of all ODD is %d\n",so);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num[10], i, se = 0, so = 0;
//     printf("Enter 10 number\n");
//     for (i = 0; i <= 9; i++)
//     {
//         scanf("%d", &num[i]);
//         if (num[i] % 2 == 0)
//         {
//             se = se + num[i];
//         }
//         else
//         {
//             so = so + num[i];
//         }
//     }
//     printf("Sum of all EVEN is %d\n", se);
//     printf("Sum of all ODD is %d\n", so);
//     return 0;
// }

// function passing array

// BUBBLE SORT

// void bubbl_sort(int A[], int size)
// {
//     int i, j, temp;
//     for (i = 0; i < 9; i++)
//     {
//         for (j = i + 1; j < 10; j++)
//         {
//             if (A[i] > A[j])
//             {
//                 temp = A[i];
//                 A[i] = A[j];
//                 A[j] = temp;
//             }
//         }
//     }
//  for (i = 0; i < 10; i++)
//   printf("%d ", A[i]);
// }

// #include <stdio.h>
// int main()
// {
//     int a[] = {44, 71, 23, 98, 62, 54, 18, 12, 39, 50};
//     int i;
//     printf("\nUnsorted Number\n");
//     for (i = 0; i < 10; i++)
//         printf("%d ", a[i]);
//     printf("\n");

//     printf("\nSorted Number\n");

//     bubbl_sort(a, 10);

//     for (i = 0; i < 10; i++)
//         printf("%d ", i);
//     return 0;
// }

// USER INPUT 10 NUMBER

// void bubbl_sort(int A[], int size)
// {
//     int i, j, temp;
//     for (i = 0; i < 9; i++)
//     {
//         for (j = i + 1; j < 10; j++)
//         {
//             if (A[i] > A[j])
//             {
//                 temp = A[i];
//                 A[i] = A[j];
//                 A[j] = temp;
//             }
//         }
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int a[10];
//     int i;
//     printf("Enter 10 number\n");
//     for (i = 0; i < 10; i++)
//         scanf("%d", &a[i]);
//     printf("\nUnsorted Number\n");
//     for (i = 0; i < 10; i++)
//         printf("%d ", a[i]);
//     printf("\n");

//     printf("\nSorted Number\n");

//     bubbl_sort(a, 10);
//     for (i = 0; i < 10; i++)
//         printf("%d ", a[i]);
//     return 0;
// }

// INSERTION SORT

// void insertion_sort(int A[], int size)
// {
//     int i, j, temp;
//     for (i = 1; i < size; i++)
//     {
//         temp = A[i];
//         for (j = i - 1; j >= 0; j--)
//         {
//             if (A[j] > temp)
//             {
//                 A[j + 1] = A[j];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         A[j + 1] = temp;
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int a[] = {44, 71, 23, 98, 62, 54, 18, 12, 39, 50, 81, 29, 7, 58};
//     int i;
//     for (i = 0; i < 14; i++)
//         printf("%d ", a[i]);
//     printf("\n");
//     insertion_sort(a, 14);

//     for (i = 0; i < 14; i++)
//         printf("%d ", a[i]);
//     return 0;
// }

// GREATEST NUMBER using function passing to ARRAY

// #include <stdio.h>
// int greatest_number(int A[],int size);
// int main()
// {
//     int a[] = {44, 71, 23, 98, 62, 54, 18, 100, 39, 50};
//     int max1=greatest_number(a, 10);

//     printf("Greatest Number in an Array elements is-:%d ",max1);
//     // printf("Greatest Number in an Array elements is-:%d ",greatest_number(a, 10));
//     return 0;
// }
// int greatest_number(int A[], int size)
// {
//     int i, max = -1;
//     for (i = 0; i < 10; i++)
//     {
//         if (A[i] > max)
//         {
//             max = A[i];
//         }
//     }
//     return max;
// }
// #include <stdio.h>
// int Smallest_number(int A[],int size);
// int main()
// {
//     int a[] = {44, 71, 23, 98, 62, 54, 1, 100, 39, 50};
//     int max1=Smallest_number(a, 10);

//     printf("Smallest Number in an Array elements is-:%d ",max1);
//     // printf("Greatest Number in an Array elements is-:%d ",greatest_number(a, 10));
//     return 0;
// }
// int Smallest_number(int A[], int size)
// {
//     int i, max = A[0];
//     for (i = 0; i < 10; i++)
//     {
//         if (A[i] < max)
//         {
//             max = A[i];
//         }
//     }
//     return max;
// }

// Greatest number without using function

// #include<stdio.h>
// int main(){
//     int a[]={44, 71, 23, 98, 62, 54, 18, 12, 39, 500};
//     int i,max=-1;
//     for(i=0;i<10;i++){
//         if(a[i]>max){
//             max=a[i];
//         }
//     }
//     printf("%d",max);
//     return 0;
// }

// Smallest number without using function

// #include<stdio.h>
// int main(){
//     int a[]={44, 71,3, 98, 62, 54, 18, 12, 39, 500};
//     int i,max=a[0];
//     for(i=0;i<10;i++){
//         if(a[i]<max){
//             max=a[i];
//         }
//     }
//     printf("%d",max);
//     return 0;
// }

// int sum(int a,int b)
// {
//     return a+b;
// }
// #include<stdio.h>
// int main()
// {
//     printf("Sum is %d",sum(10,20));
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a[]={44,71,23,98,62,54,18,12,39,50};
//     int i,j,temp;
//     for(i=1;i<=9;i++){
//         temp=a[i];
//         for(j=i-1;j>=0;j--){
//             if(a[j]>temp){
//                 a[j+1]=a[j];
//             }else{
//                 break;
//             }
//         }
//         a[j+1]=temp;
//     }
//     for(i=0;i<=9;i++){
//         printf("%d ",a[i]);

//     }
//     return 0;
// }

// swapping with pointer

// #include <stdio.h>
// void swap(int *, int *);
// int main()
// {
//     int a, b;
//     printf("Enter two number");
//     scanf("%d%d", &a, &b);
//     swap(&a,&b); // call by reference
//     printf("a=%d and b=%d", a, b);
//     return 0;
// }
// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;

// }
// #include<stdio.h>
// int main(){
//     char a[]="pankaj";
//     int i;
//     for(i=0;a[i]!='\0';i++);
//         printf("%d",i);
// }
// #include<stdio.h>
// int main(){
//     char a[]="pankaj";
//     int i,count=0;
//     while(a[i]){
//         i++;
//         count++;
//     }
//     printf("%d",count++);
// }
// #include<stdio.h>
// int main(){
//     char a[]="pankaj";
//     int i;
//     while(a[i]){
//         i++;
//     }
//     printf("%d",i);
// }

// #include <stdio.h>
// int main()
// {
//     char a[] = "happy birthday";
//     char b = 'h';
//     int i, count = 0;
//     for (i = 0; a[i]; i++)
//         if (a[i] == b)
//             count++;
//     printf("%d", count);
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[]="happybirthday";
//     char b='y';
//     int i=0,count=0;
//     while(a[i]){
//         i++;
//         if(a[i==b)
//         count++;
//     }
//     printf("%d",count);
// }


#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter a string\n");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    printf("%d",i);
    return 0;
}