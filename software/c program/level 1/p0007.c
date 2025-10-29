#include<stdio.h>
int main()
{
    int time,hr,min,hr1;
    scanf("%d",&time);
    hr=time/100;
    min=time%100;
    if(hr==0)
    {
        printf("12-Hour Time: 12:00 AM");
    }
    else if(hr==12)
    {
        printf("12-Hour Time: 12:00 PM");
    }
    else if(hr<12)
    {
        printf("12-hour time:%d:%d AM",hr,min);
    }
    else if(hr>12)
    {
        hr1=hr-12;
        printf("12-Hour Time:%d:%d PM",hr1,min);
    }
    else if(hr>=24)
    {
        printf("Invalid railway time input.");
    }

    

    return 0;
}