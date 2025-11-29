#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    printf("Enter a string: ");
    gets(str);
    int start=0;
    int end=strlen(str)-1;
    int flag=1;
    while(start<end)
    {
        if(str[start]!=str[end])
        {
            flag=0;
            break;
        }
        start++;
        end--;
    }
    if(flag)
    {
      printf("It is palindrome");
    }
    else
    {
        printf("It is not palindrome");
    }
    return 0;

}
