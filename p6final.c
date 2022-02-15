#include<stdio.h>

void input_two_strings(char *a,char *b)
{
    printf("enter the strings for a & b:");
    scanf("%s %s",a,b);

}

int strcmp(char *a,char *b)
{
    for (int i=0;a[i]!='\0' && b[i]!='\0';i++)
    {
        if (a[i]>b[i])
        {
            return 1;
        }
        if (a[i]<b[i])
        {
            return -1;
        }
        else if(a[i]==b[i])
        {
            continue;
        }
    }
}

void output(char *a,char *b,int result)
{
    if (result==1)
    {
        printf("%s is greater than %s",a,b);

    }
    else if(result==-1)
    {
        printf("%s is greater than %s",b,a);

    }
    else if(result==0)
    {
        printf("%s is equal to %s",a,b);

    }
}

int main()
{
    char a[300],b[200];
    input_two_strings(a,b);
    int res=strcmp(a,b);
    output(a,b,res);

} 