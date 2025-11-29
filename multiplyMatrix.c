#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int A[r][c],B[r][c],C[r][c];
    printf("Input elements of matrix 1:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Input elements of matrix 2: ");
    for(int i=0;i<r;i++)
    {
       for(int j=0;j<c;j++)
       {
           scanf("%d",&B[i][j]);
       }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            C[i][j]=0;
        }

    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            for(int k=0;k<c;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("Product of matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
