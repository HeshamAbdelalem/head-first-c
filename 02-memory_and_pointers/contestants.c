#include <stdio.h>

int main()
{
    int constestnats[] = {1, 2, 3};

    int *choise = constestnats;

    printf("%i", *choise);

    constestnats[0] = 2;               //*[2,2,3]
    constestnats[1] = constestnats[2]; //*[2,3,3]
    constestnats[2] = *choise;         //*choise is the variable first variable of the array pointer which is 2

    printf("constestnats #2 is : %i", constestnats[2]);
}