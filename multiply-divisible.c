#include<stdio.h>
int main()
{
    int n;
    printf("enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements: ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    int product=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0&&arr[i]%4!=0)
        {
            product*=arr[i];
        }
    }
    printf("product=%d",product);
    return 0;
}

