#include<stdio.h>
int main()
{
    int C,T;
    scanf("%d %d",&C,&T);
    if(C<=0)
    {
        printf("invalid credit limit");
    }
    else if(T<=0)
    {
        printf("invalid transcation amount");
    }
    else if(T<=C)
    {
        printf("transcation approved");
    }
    else if(T>C)
    {
        printf("transcation decline");
    }
    return 0;
}