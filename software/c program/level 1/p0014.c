#include<stdio.h>
int main()
{
    int N,D;
    scanf("%d %d",&N,&D);
    if(N%2!=0)
    {
        printf("player moves forward %d units",D*3);
    }
    else if(N%2==0)
    {
        printf("player moves backward %d units",D/3);
    }
    return 0;
}