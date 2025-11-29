#include<stdio.h>
int main()
{
    int r=3,c=3;
    int A[3][3],B[3][3];
    printf("Input elements of matrix 1:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Input elements of matrix 2:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("Sum of matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",A[i][j]+B[i][j]);
        }
        printf("\n");
    }
    return 0;
}

