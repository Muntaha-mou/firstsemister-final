#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[200];
    fgets(str,200,stdin);
    int count =0,word=0;
    for(int i=0;str[i]!='\0';i++)
    {
       if(!isspace(str[i])&&word==0)
       {
           count++;
           word=1;
       }
       else if(isspace(str[i]))
       {
        word=0;
       }
    }
    printf("Words=%d\n",count);
    return 0;
}
