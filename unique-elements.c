#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input array elements: ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("unique elements: ");
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j]&&i!=j)
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("%d ",arr[i]);
    }
    return 0;
}
