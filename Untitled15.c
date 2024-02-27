#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter a number");
    scanf("%d",&n);
    if(n<0){
        printf("enter the positive number");
    }
        else{
            for(i=1;i<=n;i++)
                fact*=i;
        }
        printf("The factorial of %d is %d",n,fact);
}

