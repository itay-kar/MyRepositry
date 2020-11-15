#include <stdio.h>
#include "myMath.h"


 void main() {
double n;
printf("please enter a double\n");
scanf("%lf", &n);

float ans1a = (float)Exponent((int)n);
float ans1b = (float)power(n,3);
double ans1 = (double) (sub(add(ans1b , ans1a) , (float)2));

float ans2a = (float) power(mult(n,2),2);
float ans2b = (float)(mult(n,3));
double ans2 = add(ans2a,ans2b);

float ans3a = (float) div(power(mult(n,4),3),5);
float ans3b = (float)(mult(n,2));
double ans3 = sub(ans3a,ans3b);

 printf("the value of ans1 is %.4lf\n" , ans1);
 printf("the value of ans1 is %.4lf\n" , ans2);
 printf("the value of ans1 is %.4lf\n" , ans3);


 
 }