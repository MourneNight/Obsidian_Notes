#include<stdio.h>

int main(){
    int max,min;
    for(int i = 1; i <= 3 ; i++)
    {
        int x;
        scanf("%d",&x);
        if(i == 1)
        {
            max = x;
            min = x;
        }
        if(x > max) max = x;
        if(x < min) min = x;
    }
    printf("%d %d",max,min);
    return 0;
}
