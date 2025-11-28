#include<stdio.h>
int main()
{
    int r,c,mul;
    scanf("%d %d",&r,&c);
    int A[r][c];
    printf("Input elements of matrix A:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Input multiplier: ");
    scanf("%d",&mul);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",A[i][j]*mul);
        }
        printf("\n");
    }
    return 0;
}




