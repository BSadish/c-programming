#include<stdio.h>
int main()
{
    int marks;
    printf("Enter  a marks :");
    scanf("%d",&marks);

    if(marks>=0 && marks<=30)
    {
        printf("The student is fail\n");
    }
        else if(marks>30 && marks<=100)
        {
            printf("The student is pass\n");
        }

    else
{
    printf("The marks is wrong");
    }
}
