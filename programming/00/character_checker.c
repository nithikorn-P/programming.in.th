#include <stdio.h>
#include <ctype.h>

#define EOS '\0'

int main()
{
    char str[10000];
    int upper = 0, lower = 0;

    scanf("%s", str);
    for (int i = 0; str[i] != EOS; ++i)
    {
        if (isupper(str[i]))
            ++upper;
        else if (islower(str[i]))
            ++lower;
    }

    if ((upper > 0) && (lower > 0))
        printf("Mix\n");
    else if (upper > 0)
        printf("All Capital Letter\n");
    else if (lower > 0)
        printf("All Small Letter\n");

    return (0);
}