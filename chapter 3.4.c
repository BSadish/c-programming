#include<stdio.h>
void main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("upper case");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("lower case");
    }

}
