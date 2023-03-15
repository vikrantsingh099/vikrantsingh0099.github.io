#include<stdio.h>
#include<math.h>
int power(int,int);

int main()
{
int a,b,c;
printf("Enter the base and power: ");
scanf("%d%d",&a,&b);
c=power(a,b);
printf(":%d",c);
return 0;
}

int power(int x,int y)
{
    int z;
   z= pow(x,y);
   return (z);
}