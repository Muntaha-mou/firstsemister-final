#include<stdio.h>
int main()
{
    int r,c;
    printf("enter row and colums: ");
    scanf("%d%d",&r,&c);
    int A[r][c],B[r][c];
    printf("enter elements of matrix A:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter elements of matrix B: ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    int equal=1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(A[i][j]!=B[i][j])
            {
                equal=0;
                break;
            }
        }
    }
    if(equal)
    {
        printf("matrix are equal");
    }
    else
    {
        printf("matrix are not equal");
    }
    return 0;
}
