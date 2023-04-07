#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 int main()
{
    double cosineValue, inputValue;
    double alpha, sin_a, pi=3.1415926;
    int a;

 printf("Menu:\n");
 printf(" 1.Calculate cos().\n 2.Calculate sin().\n 3.Exit.");
 printf(" \nEnter a menu item:\n\n");
 scanf("%d",&a);
  if(a==1){
     printf("Please enter the value to calculate cosine value :");
     scanf("%lf",&inputValue);

     cosineValue=cos(inputValue);

     printf("\ncosine value of %f is %f\n",inputValue,cosineValue);
 }
  if(a==2){
     printf("Please enter the value to calculate sine value :");
     scanf("%lf",&alpha);

     alpha=alpha*pi/180;
     sin_a=sin(alpha);

     printf("\nThe value of sin of %f is %.2f degress\n",alpha,sin_a);

 }
  if(a==3){
     printf(" You have exited the program ");


 }

return 0;
}
