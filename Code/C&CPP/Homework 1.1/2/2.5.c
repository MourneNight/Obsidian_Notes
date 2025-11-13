#include<stdio.h>

int main(){
    char x;
    scanf("%c",&x);
    if(x >= '0' && x <= '9')
    {
        x = x - '0';
    }
    else if(x >= 'A' && x <= 'F')
    {
        x = x- 'A' + 10;
    }
    printf("%d%d",x/7,x%7);
    return 0;
}
