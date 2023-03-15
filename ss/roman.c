#include<stdio.h>
int roman(int,int,char);
int main()
{
    int year;
    printf("Enter the value of year: ");
    scanf("%d",&year);
    year=roman(year,1000,'m');
     year=roman(year,500,'d');
      year=roman(year,100,'c');
       year=roman(year,50,'i');
        year=roman(year,10,'x');
         year=roman(year,5,'v');
    return 0;



}
int roman(int y,int k,char ch)
{int i,j;
j=y/k;
for(i=1;i<=j;i++)
printf("%c",ch);
return(y%k);
}
