#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n],b[n];
    int *p1=a,*p2=b;
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p1+i);
    }
    for(int i=0;i<n;i++)
    {
        *(p2+i)=*(p1+i);
    }
    printf("Copied array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
