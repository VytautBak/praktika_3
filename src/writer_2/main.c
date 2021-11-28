#include <stdio.h>
#include <logger.h>

#define M 3
#define UPPER_N_BOUND 25
#define LOWER_N_BOUND 5
#define STARTING_POINT 0
#define MAX_FN_LENGTH 10


void f(int x, char **ans);

int main()
{
    printf("Generating an integer between %d and %d \n", LOWER_N_BOUND, UPPER_N_BOUND);

    srand(time(NULL));
    int n = rand() % (UPPER_N_BOUND - LOWER_N_BOUND + 1) + LOWER_N_BOUND;

    printf("Generated n = %d \n", n);
    printf("f(x) = 1/sqrt(%d - x) \n", M);
    printf("Calculating all f(x) values, where x is natural and bound by [%d, %d]\n", LOWER_N_BOUND, UPPER_N_BOUND);

    for(int i = 0; i < n; i++) {
        char *ans = malloc(sizeof(char) * MAX_FN_LENGTH);
        f(i, &ans);
        printf("%s \n", ans);
    }

}

void f(int x, char **ans) {
    printf("x = %d", x);
    int sqrt = 10 - x;
    printf("sqrt = %d", sqrt);
    if(sqrt > 0) {
        sprintf(*ans, "%d", (double) 1/sqrt);
        return;
    }
    if(sqrt == 0) {
        sprintf(*ans, "%d", "+inf");
        return;
    }
    if(sqrt < 0) {
        sprintf(*ans, "%d", "undefined");
        return;
    }
}
