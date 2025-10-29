#include<stdio.h>
#include<math.h>
int main()
{
    long int Sbase,Sbonus,Sallowance,E,Stotal,S;
    double P;
    scanf("%ld %ld %ld %ld",&Sbase,&Sbonus,&Sallowance,&E);
    if(Sbonus<0)
       Sbonus=0;
       if(Sallowance<0)
         Sallowance=0;
    Stotal=Sbase+Sbonus+Sallowance;
    S=Stotal-E;
    if(Stotal==0)
    {
       printf("Stotal=%ld\n",Stotal);
       printf("S=%ld\n",S);
       Printf("P=undefined\n");
       return 0;

    }
    P=((double)S/Stotal)*100;
    printf("S=total=%l\n",Stotal);
    printf("S=%ld\n",S);
    printf("P=%.2f%%\n",P);

    return 0;
}