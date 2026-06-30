#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int i, j, palindrome = 1;

    printf("Enter a string");
    scanf("%s", str);

    j = strlen(str);

    for(i = 0; i < j/ 2; i++) 
    {
        if(str[i] != str[j- i - 1])
         {
            palindrome= 0;
            break;
        }
    }

    if(palindrome)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}