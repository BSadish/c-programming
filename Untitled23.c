#include<stdio.h>
int main()
{
    int num,rev=0,rem=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int n=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("The reverse of %d is %d",n,rev);


}
