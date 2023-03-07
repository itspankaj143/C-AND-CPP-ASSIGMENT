#include<stdio.h>
int main(){
    int num[10];
    int i,sum=0;
    float average=0;
    printf("Enter 10 number\n");
    for(i=0;i<=9;i++){
        scanf("%d",&num[i]);
    }
    printf("Display the sun and Average\n");
    for(i=0;i<=9;i++){
        sum=sum+num[i];
        average=sum/10.0;
    }
    printf("Sum of 10 number is %d\n",sum);
    printf("Average of 10 number is %f\n",average);
    return 0;
}