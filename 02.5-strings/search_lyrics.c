#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my heart in Harvard Med School",
    "Newark, Newark - a wonderfull town",
    "Dancing with a dork",
    "From here to maternity",
    "The girl from Iwo Jima",
};

void find_track(char search_for[])
{
    for (int i = 0; i < 5; i++)
    {
        if (strstr(tracks[i], search_for))
        {
            printf("Track %i: '%s' \n", i, tracks[i]);
        }
    }
}

int main()
{
    char search_for[80];
    printf("Search For: \n");
    scanf("%79s", search_for);
    //! this is to make sure if the user insert more than 80 char ,the last one will be \0
    search_for[strlen(search_for) - 1] = '\0';
    find_track(search_for);
}