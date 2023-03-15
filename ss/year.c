#include<stdio.h>
int year(int);
int main()
{
    int yr,b;
    
    printf("Enter the year for leap or not:");
    scanf("%d",&yr);
    b=year(yr);
}
int year(int x)
{
    char b;
    if(x%4==0)
    b=printf("Leap year");
    else
    b=printf("not a leap year");
    return(b);
}