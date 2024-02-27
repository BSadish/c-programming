#include<stdio.h>
#include<string.h>
int main()
{
    char name[100][15],temp[15];
    int i,j,n;
    printf("No of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Name %d: ",i);
        scanf("%s",name[i]);
    }
        for(i=0;i<n-1;i++)
        {
                for(j=i+1;j<n;j++)
                {
                    if(strcmpi(name[i],name[j])>0)
                    {
                        strcpy(temp,name[i]);
                        strcpy(name[i],name[j]);
                        strcpy(name[j],temp);
                    }
                }

        }
        printf("\n Display name in alphabetically order \n");
            for(i=0;i<n;i++)
{
    printf("%s\n",name[i]);
}

}
