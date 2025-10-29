#include<stdio.h>
#include<math.h>
int main()
{
    int P,T;
    float R,A;
    scanf("%d %f %d",&P,&R,&T);
    if(R<1 && R>8.5)
    {
        printf("Error: Interest rate must be between 1.0 and 8.5");
        return 0;
    }
    else if(P<1 && P>2^31-1)
    {
        printf("Error: Principal amount must be between 1 and 2^31 - 1");
        return 0;
    }
    A=P*pow((1+R/100),T);
    printf("A=%.2f",A);

    return 0;
}