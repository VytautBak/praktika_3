#include <stdio.h>
#include <logger.h>
#include <string.h>
#include <unistd.h>

#define MAX_LINE_LENGTH 255

void print_log_of(char *program);
void print_whole_log();

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        if (strcmp(argv[1], "-P") == 0|| strcmp(argv[1], "--program ") == 0)
            print_log_of(argv[2]);
    }
    else {print_whole_log();}

    return 0;
}

void print_log_of(char *program)
{
    if (open_log("r"))
    {
        FILE **LOG = get_file();
        char buffer[MAX_LINE_LENGTH];
        char buffer_copy[MAX_LINE_LENGTH];
        char *token;
        while (!feof(*LOG))
        {
            fgets(buffer, MAX_LINE_LENGTH, *LOG);
            strcpy(buffer_copy, buffer);
            token = strtok(buffer_copy, " ");
            token = strtok(NULL, " ");
            token = strtok(NULL, " ");
            if(token != NULL) {
                if(strcmp(program, token) == 0) {
                    printf("%s", buffer);
                }
            }
            
        }
    }
}

void print_whole_log() {
    if(open_log("r")) {
        FILE **LOG = get_file();
        char buffer[MAX_LINE_LENGTH];
        while(!feof(*LOG)) {
            fgets(buffer, MAX_LINE_LENGTH, *LOG);
            if(buffer != NULL) printf("%s", buffer);
        }
    }
}