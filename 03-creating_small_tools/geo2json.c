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
        /*
        if (started)
        {
            printf(",\n");
        }
        else
        {
            started = 1;
        }
        */
        printf("{latitude: %f, longitude: %f , info: '%s\n'}", latitude, longitude, info);
        /*
        if ((latitude < -90.0) || (latitude > 90.0))
        {
            fprintf(stderr, "invaild latitude: %f\n", latitude);
            return 2;
        }
        if ((longitude < -180.0) && (longitude > 180.0))
        {
            fprintf(stderr, "invalid longitude: %f\n", longitude);
            return 2;
        }
        */
    }

    puts("\n]");
    return 0;
}