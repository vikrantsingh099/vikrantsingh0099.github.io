#include <stdio.h>
float avg (float a , float b ,float c);

int main()
{
    int x,y,z,sum;
    printf("Enter the number x : \n");
    scanf("%f",&x);
    printf("Enter the number y : \n");
    scanf("%f", &y);
    printf("Enter the number z : \n");
    scanf("%f", &z); 
    sum = avg(x,y,z);
    printf("The average of x y and z is:%f",sum);  
}
float avg(float a,float b,float c)
