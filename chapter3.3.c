#include<stdio.h>
int main()
{
    int marks;
    printf("Enter a marks: ");
    scanf("%d",&marks);

    if(marks>=0 && marks<30)
    {
        printf("The grade is C");
    }
    else if(marks>=30 && marks<70)
    {
        printf("The grade is B");
    }
    else if(marks>=70 && marks<90)
    {
        printf("The grade is A");
    }
    else if(marks>=90 && marks<=100)
    {
        printf("The grade is A+");
    }
    else{
        printf("The marks you input is incorrect");
    }
}
