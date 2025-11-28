#include<stdio.h>
int main()
{
    int n;
    printf("enter number of students: ");
    scanf("%d",&n);
    int marks[n];
    printf("enter marks: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    int min=marks[0],max=marks[0];
    for(int i=0;i<n;i++)
    {
        if(marks[i]<min)
        {
            min=marks[i];
        }
        if(marks[i]>max)
        {
            max=marks[i];
        }
    }
    printf("mark range:%d-%d",min,max);
    return 0;
}
