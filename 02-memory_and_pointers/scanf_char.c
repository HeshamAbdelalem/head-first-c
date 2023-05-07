#include <stdio.h>

int main()
{
    char firstname[20];
    char lastname[20];

    printf("Please enter your first name and last name: \n");
    //* here i dont have to put &firstname cuz it's array already , and arrays point to the address
    scanf("%19s %19s", firstname, lastname); //! 19s means 19 character the 20th is for \0

    printf("Hey %s %s , It's really nice to meet you ;)\n", firstname, lastname);
}