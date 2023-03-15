#include<stdio.h>
int main()
{
    int a=0,b=1,c,d,e;
    printf("enter the nos.required: ");
    scanf("%d",&c);
    printf("%d  %d  ",a,b);
    for(d=2;d<c;d++)
    {
        e=a+b;
       printf("%d  ",e);
       a=b;
       b=e;

    }
    return 0;
}
