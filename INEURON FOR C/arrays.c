#include<stdio.h>
int main(){
    int a[6],sum=0;
    printf("Ente 10 number");
    for(int i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=9;i++){
        sum=sum+a[i];
    }
    printf("sum is %d",sum);
    return 0;
}