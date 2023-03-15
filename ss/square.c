#include<stdio.h>
float power(float);
int main()
{
    float a,sq;
    printf("Enter the number to be squared: ");
    scanf("%f",&a);
   sq= power(a);
    printf("%f",sq);
    return 0;
}

float power(float x)
{
float y;
y=x*x;
return(y);
}