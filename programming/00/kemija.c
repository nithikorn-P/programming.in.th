#include <stdio.h>
#include <string.h>

const char *vowels = "aeiou";

int main()
{
    char    str[100];
    size_t  i = 0;

    scanf("%[^\n]%*c", str);
    while (i < strlen(str))
    {
        printf("%c", str[i]);
        if (strchr(vowels, str[i]) == NULL)
            i += 1;
        else
            i += 3;
    }
    printf("\n");

    return (0);
}