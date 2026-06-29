simple arithmetic calculator in C 
#include<stdio.h> int main() { int x,y; int sum, difference, product ,remainder;  float quotient ;
     printf("enterx= ");
      scanf("%d",&x);
       printf("enter y= "); 
       scanf("%d",&y); 
       sum=x+y;  printf("sum=%d\n", sum);
         difference=x-y;
          printf("difference=%d\n", difference);
           product=x*y;
            printf("product=%d\n", product);
             quotient=(float)x/y;
              printf("quotient=%f\n", quotient); 
    remainder=x%y; 
    printf("remainder=%d\n",remainder); 
     return 0; }