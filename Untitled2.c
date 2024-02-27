#include<stdio.h>
void main()
{
    int n,fact=1,i;
    for(n=1;n<=10;n++)
    {
        for(i=1;i<=n;i++);
        {
            fact=fact*i;
        }
        printf("Factorial of %d= %d\n",n,fact);

    }
}

