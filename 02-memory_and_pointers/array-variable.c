#include <stdio.h>

int main()
{
    char s[] = "Hello guys:D";
    char *t = s; //! I dont have to put & , cuz i use array variable pointer

    printf("array s: %s\n", s);
    printf("*t: %i", *t);
}