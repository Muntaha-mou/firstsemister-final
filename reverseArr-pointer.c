#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n],*p=arr;
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",p+i);
    int start=0,end=n-1,temp;
    while(start<end)
    {
        temp=*(p+start);
        *(p+start)=*(p+end);
        *(p+end)=temp;
        start++;
        end--;

    }
    printf("Reversed array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;

}
