#include<stdio.h>
#include<math.h>
int main(){
    int num,x,y,count=0,sum=0,rem=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    x=num;
    while(x)
    {
        x=x/10;
        count++;
    }
    y=num;
    while(y)
    {
        rem=y%10;
        y=y/10;
        sum+=pow(rem,count);

    }
    if(sum==num){
        printf("\n %d is an ArmStrong number",num);
    }else{
        printf("\n %d is not a Armstrong number",num);
    }
}