#include <stdio.h>
#include <string.h>

int main()
{
    char    str[16], c;
    int     len;

    scanf("%s", str);
    len = strlen(str);
    
    // ..#..
    for (int i = 1; i <= len; ++i)
    {
        c = (i % 3) ? '#' : '*';
        printf("..%c.", c);
    }
    printf(".\n");

    // .#.#.
    for (int i = 1; i <= len; ++i)
    {
        c = (i % 3) ? '#' : '*';
        printf(".%c.%c", c, c);
    }
    printf(".\n");

    // #.X.#
    for (int i = 0; i < len; ++i)
    {
        if (i == 0) {
            printf("#.%c.", str[i]);
            continue;
        }
        if (((i+1) % 3) && (i % 3))
            printf("#.%c.", str[i]);
        else
            printf("*.%c.", str[i]);
    }
    printf("%c\n", (len % 3) ? '#' : '*');

    // .#.#.
    for (int i = 1; i <= len; ++i)
    {
        c = (i % 3) ? '#' : '*';
        printf(".%c.%c", c, c);
    }
    printf(".\n");

    // ..#..
    for (int i = 1; i <= len; ++i)
    {
        c = (i % 3) ? '#' : '*';
        printf("..%c.", c);
    }
    printf(".\n");

    return (0);
}