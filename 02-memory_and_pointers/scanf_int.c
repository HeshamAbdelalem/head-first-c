#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Num: \n");
    scanf("%i", &num); //! here i have to put the address &num not like the string!

    printf("this is the num you have entered: %i\n", num);
}