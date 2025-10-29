#include<stdio.h>
int main()
{
    int P,Q,T;
    float A,D;
    scanf("%d %d",&P,&Q);
    T=P*Q;
    if(P>0 && Q>=1)
    {
        if(T%2==0)
        {
            D=0.1*T;
            A=T-D;
            printf("A=%.2f\n",A);
        }
        else if(T%2!=0)
        {
            D=0.15*T;
            A=T-D;
            printf("A=%.2f",A);
        }
    }
    else{
        printf("invalid price and quantity");
    }
    
    return 0;
}