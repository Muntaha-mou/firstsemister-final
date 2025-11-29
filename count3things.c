#include<stdio.h>
int main()
{
    char str[200];
    int alpha = 0, digit = 0, special = 0;
    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
          alpha++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
          digit++;
        }
        else
        {
          special++;
        }
    }

    printf("Alphabets = %d\nDigits = %d\nSpecial Characters = %d",
            alpha, digit, special);
    return 0;
}
