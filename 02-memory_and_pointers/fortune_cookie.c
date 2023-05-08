#include <stdio.h>

void fortune_cookie(char msg[])
{
    printf("Msg occupies %lu bytes \n", sizeof(msg));
    printf("Message Reads: %s\n", msg);
}

int main()
{
    char quote[] = "Hello World , I'm Hesham";
    fortune_cookie(quote);
    printf("the quote string is stored at : %p \n", quote);
    printf("the size of quote form main function: %lu\n", sizeof(quote));
}