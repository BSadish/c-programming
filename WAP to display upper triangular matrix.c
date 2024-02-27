#include<stdio.h>
void main()
{
    static int a[10][10],row,column,i,j;
    printf("Order of matrix:")
    scanf("%d%d",&row,&column)
    if(row==column)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                if(i<=j)
                {
                    printf("Enter element a[%d][%d]",i,j);
                    scanf("%d",&a[i][j])
                }
            }
        }
        printf("\n Display upper triangular matrix")
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                printf("%d\t",a[i][j]);
            }
                printf("\n")
            }
        }
        else
            printf("\n Matrix should be square\n")
    }
}
