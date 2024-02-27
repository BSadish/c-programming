#include<stdio.h>
int main()
{
    int n,rev=0,rem=0,pal;
    printf("Enter a number: ");
    scanf("%d",&n);
    pal=n;

    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
if(pal==rev){
    printf("The number is pallindrome");
}
else{
    printf("The number is not pallindrome");
}


}
