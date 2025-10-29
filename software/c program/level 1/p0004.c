#include<stdio.h>
int main()
{
    int C,S,P;
    scanf("%d %d",&C,&S);
    P=S-C;
    if(P>0)
    {
     printf("P=%d\n",P);
     printf("Result: Profit\n");
    }
    else if(P<0)
    {
        printf("P=%d\n",P);
        printf("Result: Loss\n");
    }
    else if(P==0)
    {
        printf("P=0\n");
        printf("Result: Break-even\n");
    }
    return 0;
}