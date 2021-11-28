#include "logger.h"

void get_formatted_time(char **string)
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(*string, "[%d-%02d-%02d %02d:%02d:%02d]",
            tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
}

int open_log(char *mode)
{
    return (LOG = fopen(DEFAULT_LOG_LOCATION, mode));
    //returns true if file exists (reading from non-existent file causes a crash)
}

int write_log(char *program, char *type, char *text)
{
    for (int i = 0; i < NUM_OF_ALLOWED_TYPES; i++)
    {
        if (strcmp(ALLOWED_LOG_TYPES[i], type) == 0)
        {
            char line[MAX_LINE_LENGTH];
            char *time = malloc(sizeof(char) * MAX_LINE_LENGTH);
            if (time != NULL)
            {
                get_formatted_time(&time);

                fputs(time, LOG);
                fputs(" ", LOG);

                fputs(program, LOG);
                fputs(" ", LOG);

                fputs(type, LOG);
                fputs(" ", LOG);

                fputs(text, LOG);
                fputs("\n", LOG);

                free(time);
                
                return 0;
            }
            
            else return -1;
        }
    }
    return -1;
}

void close_log()
{
    fclose(LOG);
}

FILE **get_file() {
    return &LOG; 
}