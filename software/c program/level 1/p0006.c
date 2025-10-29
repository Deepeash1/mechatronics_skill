#include<stdio.h>
int main()
{
    char name[50];
    int rollno;
    float P,A,T;
    scanf("%s %d %d %d",&name,&rollno,&T,&A);
    if(A>T)
    {
        printf("Number of attended class cannot be greater than total number of class");
        return 0;
    }
    else if(T<0)
    {
        printf("Invalid total number of class");
        return 0;
    }
    else if(A<0)
    {
        printf("Invalid number of class attended");
        return 0;
    }
    else if(A==0)
    {
        printf("Attendance Percentage: 0");
        return 0;
    }
    
    else{
        P=(A/T)*100;
    }
    printf("attendance percentage:%.2f%%",P);
    
    return 0;
}