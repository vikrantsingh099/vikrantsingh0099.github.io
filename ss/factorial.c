#include<stdio.h>
int factorial(int);

int main()
{
int a,b;
printf("Enter the number for factorial: ");
scanf("%d",&a);
b=factorial(a);
printf("Factorial is :%d",b);
return 0;
}
int factorial(int x)
{
    int y=1;
    while(x!=0)
    {y=x*y;
    x--;
    }
return y;
}
   
