#include<stdio.h>

int main(){
    double n;
    scanf("%lf",&n);
    int m = (int)(n * 100 + 0.5);
    int money[10] = {10000,5000,2000,1000,500,100,50,10,5,1};
    for(int i = 0 ; i < 10 ; i++ )
    {
        printf("%d ",m / money[i]);
        m -= m / money[i] * money[i];
    }
    return 0;
}
