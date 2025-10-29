#include<stdio.h>
int main()
{
    int L,W,area;
    scanf("%d %d",&L,&W);
    area=L*W;
    if(L==W)
    {
        printf("shape:square\n");
        printf("area=%d\n",area);
    }
    else{
        printf("shape:rectangle\n");
        printf("area=%d\n",area);
    }
    
    return 0;
}