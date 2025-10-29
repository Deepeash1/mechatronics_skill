#include<stdio.h>
int main()
{
    int age,gender;
    char name[50];
    scanf(" %s %d %d",&name,&age,&gender);
    if(gender!=1 && gender!=2)
    {
        printf("please type a valid gender");
        return 0;
    }
    else if(age>=18 && gender==1)
    {
        printf("eligible status: eligible\n");
        printf("salutation:Mr.%s\n",name);
    }
    else if(age>=18 && gender==2)
    {
        printf("eligible status: eligible\n");
        printf("salutation:Ms.%s\n",name);
    }
    else if(age<18)
    {
        printf("eligible status: not eligible\n");
        return 0;
    }
    
       
    
 

    return 0;
}