#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<=0)
    {
        printf("Order has no proper quantity specified. Thank YOU!");
        return 0;
    }
    else if(x>0 && x<70)
    {
        printf("Order Confirmed. Thank YOU!");
    }
    else if(x>=70)
    {
        printf("Order Limit Reached. Thank YOU!");
    }
    return 0;
}