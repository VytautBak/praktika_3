#include <stdio.h>
#include <logger.h>
#include <unistd.h>

#define MAX_LINE_LENGTH 255
#define UPPER_N_BOUND 25
#define LOWER_N_BOUND 5
#define program_name "fibonacci_skaiciuokle"

int main(int argc, char *argv[])
{
  printf("Generating an integer between %d and %d \n", LOWER_N_BOUND, UPPER_N_BOUND);

  srand(time(NULL));
  int n = rand() % (UPPER_N_BOUND - LOWER_N_BOUND + 1) + LOWER_N_BOUND;

  printf("Generated n = %d \n", n);
  printf("Calculating %d fibonacci numbers...\n", n);
  printf("Generated logs:\n");

  open_log("a");
  int a = 0;
  int b = 1;
  int c;
  if (n > 0)
  {
    char *buffer = malloc(sizeof(char) * MAX_LINE_LENGTH);
    if (buffer != NULL)
    {
      sprintf(buffer, "1-asis fibonacci skaicius yra 0");
      printf("%s %s %s \n", program_name, "INFO", buffer);
      write_log(program_name, "INFO", buffer);
      free(buffer);
    }
  }
  if (n > 1)
  {
    char *buffer = malloc(sizeof(char) * MAX_LINE_LENGTH);
    if (buffer != NULL)
    {
      sprintf(buffer, "2-asis fibonacci skaicius yra 1");
      printf("%s %s %s \n", program_name, "INFO", buffer);
      write_log(program_name, "INFO", buffer);
      free(buffer);
    }
  }
  if (n > 2)
  {
    for (int i = 2; i < n; i++)
    {
      c = a + b;
      char *buffer = malloc(sizeof(char) * MAX_LINE_LENGTH);
      if (buffer != NULL)
      {
        sprintf(buffer, "%d-asis fibonacci skaicius yra %d", i + 1, c);
        printf("%s %s %s\n", program_name, "INFO", buffer);
        write_log(program_name, "INFO", buffer);
        a = b;
        b = c;
        free(buffer);
      }
    }
  }
  close_log();

  return 0;
}