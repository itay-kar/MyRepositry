#include <stdio.h>
#include "myMath.h"

float e = 2.71828182846;

double Exponent(int x)
{
            double sum = 1;
    while(x>0){
        sum = sum*e;
        x--;
    }
    return sum;
}

double power(double x , int y){
    double ans = 1;
while(y>0){
    ans= ans*x;
    y--;
}
return ans;
}