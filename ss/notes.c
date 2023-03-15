 #include<stdio.h>
 int main()
 {
  int sum,i;
  printf("Enter the amount:");
  scanf("%d",&sum);
  i=sum/100;
  sum=sum-(100*i);
  printf("%d100*",i);
  i=sum/50;
  sum=sum-(50*i);
   printf("%d50*",i);
    i=sum/10;
  sum=sum-(10*i);
   printf("%d10*",i);
    i=sum/7;
  sum=sum-(7*i);
   printf("%d7*",i);
    i=sum/5;
  sum=sum-(5*i);
   printf("%d5*",i);
    i=sum/3;
  sum=sum-(3*i);
   printf("%d3*",i);
   i=sum/2;
  sum=sum-(2*i);
   printf("%d2*",i);
   i=sum/1;
  sum=sum-(1*i);
   printf("%d1*",i);
   return 0;
 }
   


  
 