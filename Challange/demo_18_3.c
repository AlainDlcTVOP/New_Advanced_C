#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t curr_time = 0;
    char *curr_t_string;
    curr_time = time(NULL);

    if (curr_time == ((time_t)-1))
    {
        (void)fprintf(stderr, "Failure to get the current time");
        exit(EXIT_FAILURE);
    }

    curr_t_string = ctime(&curr_time);

    if (curr_t_string == NULL)
    {
        (void)fprintf(stderr, "Failure to get the current time");
        exit(EXIT_FAILURE);
    }
    (void)printf("\n The current time is %s \n", curr_t_string);
    exit(EXIT_SUCCESS);
}
