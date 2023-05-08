#include <stdio.h>

int main()
{
    float latitude = 0.00;
    float longitude = 0.00;

    char info[80];
    int started = 0;

    puts("data=[");

    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3)
    {
        if (started)
        {
            printf(",\n");
        }
        else
        {
            started = 1;
        }
        printf("{latitude: %f, longitude: %f , info: '%s'}", latitude, longitude, info);
    }

    puts("\n]");
    return 0;
}