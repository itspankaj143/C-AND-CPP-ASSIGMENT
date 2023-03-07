#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int i;
    // char s[]="Hello Students";
    char s[50];
    fp=fopen("f1.txt","w");
    if(fp==NULL){
        printf("File cannot open");
        exit(1);
    }
    printf("Enter a String\n");
    // fgets(s,20,stdin);
    gets(s);
    for(i=0;i<strlen(s);i++)
        fputc(s[i],fp) ;
        // printf(s[i],fp);
        getch();
        fclose(fp);
        getch();

    

}