//Given a list of names, write a for loop that prints the names in reverse order.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
   for(int i=1;i<=n;i++)
{
    printf("%d x %d =%d\n",n,i,n * i);
}

}
