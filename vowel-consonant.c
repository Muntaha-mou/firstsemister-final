#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    int v=0,c=0;
    printf("Enter a string: ");
    fgets(str,200,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        char ch= str[i];
        if(ch>='A'&&ch<='Z')
        {
            ch=ch+32;
        }
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            v++;
        }
        else if(ch>='a'&&ch<='z')
        {
            c++;
        }

    }
    printf("Vowels=%d\nConstants=%d",v,c);
    return 0;
}

