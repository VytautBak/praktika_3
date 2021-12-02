#include <stdio.h>
#include <logger.h>
#include <unistd.h>
#include <stdbool.h>

#define PROGRAM "random_generator"
#define UPPER_R_BOUND 25
#define LOWER_R_BOUND 5

int main(int argc, char *argv[])
{
  int t, r;
  char message[255];
  while(true) {
    open_log("a");
    srand((unsigned)time(NULL));
    r = rand() % (UPPER_R_BOUND - LOWER_R_BOUND + 1) + LOWER_R_BOUND;
    t = r % NUM_OF_ALLOWED_TYPES;
    sprintf(message, "%d is the randomly generated number", r); 
    write_log(PROGRAM, ALLOWED_LOG_TYPES[t], message);
    sleep(1);
    printf("Written message \"%s\" to log", message);
    close_log();
  }
  
  return 0;
}