#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A!=0 && B!=0 && C!=0 && (A+B+C==180))
    {
        printf("valid triangle\n");
    }
    else{
        printf("invalid triangle\n");
    }
    return 0;
}