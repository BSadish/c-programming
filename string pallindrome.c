#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    printf("enter a string:");
    scanf("%s",str1);
    strcpy(str2,str1);
    strrev(str2);
    if (strcmpi(str1,str2)==0)

        printf("%s is pallindrome",str1);

    else
        printf("%s is not pallindroem:",str1);



}
