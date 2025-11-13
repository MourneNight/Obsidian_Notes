#include<stdio.h>
#define PI 3.14159

int main(void){
    double r,h;
    double c,s1,s2,s3;
    scanf("%lf%lf",&r,&h);
    c = PI * 2 * r;
    s1 = c * h;
    s2 = s1 + 2 * PI * r * r;
    s3 = PI * r * r * h;
    printf("%.6f %.6f %.6f %.6f",c,s1,s2,s3);
    return 0;
}
