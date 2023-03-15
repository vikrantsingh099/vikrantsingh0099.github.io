#include<stdio.h>
int calsum(int,int,int);
int main()
{int a,b,c,sum;
printf("Enter any three numbers: ");
scanf("%d%d%d",&a,&b,&c);
sum=calsum(a,b,c);
printf("sum=%d\n",sum);
return 0;
}
int calsum(int x,int y,int z)
{int d;
x=2,y=3,z=4;
d=x+y+z;
printf("%d",d);
return(d);
}