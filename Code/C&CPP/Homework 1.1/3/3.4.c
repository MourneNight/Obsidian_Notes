#include<stdio.h>
#include<math.h>

int main(){
    double n;
    scanf("%lf",&n);
    double i = 1;
    double left = 0,right = n;
    while(i == 1)
    {
        double temp = (left + right) / 2;
        if(pow(temp,2) > n) right = temp;
        if(pow(temp,2) < n) left = temp;
        if(fabs(pow(temp,2) - n) <= 0.0000001) i =temp;
    }
    printf("%.4f",i);
    return 0;
}
