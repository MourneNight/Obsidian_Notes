#include<stdio.h>

int main(){
    char n[5] = {0};
    scanf("%s",&n);
    for(int i =4 ; i >= 0 ; i-- )
    {
        if(n[i] != 0)
        {
            printf("%c ",n[i]);
        }
    }
    return 0;
}
