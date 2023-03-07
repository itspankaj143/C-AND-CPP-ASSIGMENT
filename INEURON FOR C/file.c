#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i;
    char str[]="I love yoyu sdjsdf yudnajsnd";
    FILE *fp;
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("File cannot Open");
        exit(1);
    }
    for(i=0;i<strlen(str);i++)
    fputc(str[i],fp);
    fclose(fp);
    return 0;

}
