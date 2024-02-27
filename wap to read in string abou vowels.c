#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,vowel=0,consonant=0,digits=0,space=0;
    printf("Enter a line of text: ");
    gets(str);
    strlwr(str);
    for(i=0;str[i]!=NULL;i++)
        {
        if (str[i]>='a'&&str[i]<='z')
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            vowel++;
    else
        consonant++;
        }
    if(str[i]>='0' && str[i]<='9')
        digits++;
    if(str[i]==' ')
        space++;
    }
    printf("\nNo of vowels=%d\n Consonant=%d\n Digits=%d\n Spaces=%d\n",vowel,consonant,digits,space);
}
