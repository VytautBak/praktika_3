#include <stdio.h>
#include <logger.h>

#define UPPER_N_BOUND 25
#define LOWER_N_BOUND 5
#define STARTING_POINT 0
#define MAX_LINE_LENGTH 10
#define PROGRAM_NAME "dalumo_skaiciuokle"

int main()
{
    printf("Generating an integer between %d and %d \n", LOWER_N_BOUND, UPPER_N_BOUND);

    srand(time(NULL));
    int n = rand() % (UPPER_N_BOUND - LOWER_N_BOUND + 1) + LOWER_N_BOUND;

    printf("Generated n = %d \n", n);

    printf("Generating %d random logs\n", n);

    open_log("a");
    char buffer[255];
    for (int i = 0; i < n; i++)
    {

        if (i % 3 == 0)
        {
            sprintf(buffer, "Oh no! %d is divisible by 3 with no remainder", i);
            printf("%s \n", buffer);
            write_log(PROGRAM_NAME, "WARNING", buffer);
        }
        else if (i % 5 == 0)
        {
            sprintf(buffer, "%d is divisible by 5 with not remainder", i);
            printf("%s \n", buffer);
            write_log(PROGRAM_NAME, "ERROR", buffer);
        }
        else if (i % 7 == 0)
        {
            sprintf(buffer, "%d is divisble by 7 with no remainder", i);
            printf("%s \n", buffer);
            write_log(PROGRAM_NAME, "MISC", buffer);
        }
    }
    close_log();
}