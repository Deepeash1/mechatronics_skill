#include<stdio.h>
int main()
    {
        int salary;
        float bonus;
        char gender;
        scanf("%d %c",&salary,&gender);
        if(salary<=0)
        {
            printf("bonus=Rs.0");
            return 0;
        }
        else if(gender!='M' && gender!='F')
        {
            printf("Gender Should be 'M' for Male and 'F' for Female");
            return 0;
        }
        else if(salary<25000)
        {
            bonus=5000;
        }
        else if(salary>=25000 && salary<=50000)
        {
            bonus=7500;
        }
        else if(salary>50000 && gender=='M')
        {
            bonus=0.1*salary;
        }
        else if(salary>50000 && gender=='F')
        {
            bonus=0.15*salary;
        }
        printf("bonus=Rs%.2f",bonus);

        return 0;
    }
