#ifndef logger_h
#define logger_h
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define DEFAULT_LOG_LOCATION "/var/log/praktika_log.log"
#define MAX_LINE_LENGTH 255
#define MAX_TIME_LENGTH 25

static const FILE *LOG;

static const char ALLOWED_LOG_TYPES[4][10] = 
{
    "ERROR",
    "WARNING",
    "INFO",
    "MISC"
};
static const int NUM_OF_ALLOWED_TYPES = 4;


void get_formatted_time(char **string);
int open_log(char *mode);
int write_log(char *program, char *type, char *text);
void close_log();
FILE **get_file();

#endif




