#include<stdio.h>
int main()
{
    int U;
    float S,B,T;
    scanf("%d",&U);
    if(U<=0)
    {
        B=0;
        S=0;
        T=0;
    }
    if(U<=50)
    {
        B=0.50*U;
    }
    else if(U<=150)
    {
        B=(50*0.50)+(U-50)*0.75;
    }
    else if(U<=250)
    {
        B=(50*0.50)+(100*0.75)+(U-150)*1.20;
    }
    else if(U>250)
    {
        B=(50*0.50)+(100*0.75)+(100*1.20)+(U-250)*1.50;
    }
    S=0.20*B;
    T=B+S;
    printf("Bill amount before surcharge=%.2f\n",B);
    printf("surcharge amount=%.2f\n",S);
    printf("total bill amount before surcharge=%.2f\n",T);
    return 0;
}