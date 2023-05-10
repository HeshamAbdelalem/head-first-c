#include <stdio.h>

int main()
{
    int i = 0;
    char word[10];

    while (scanf("%9s", word) == 1)
    {
        i++;

        if (i % 2)
        {
            fprintf(stdout, "%s\n", word);
        }
        else
        {
            fprintf(stderr, "%s\n", word);
        }
    }
    return 0;
}