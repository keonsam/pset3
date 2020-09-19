#include <stdio.h>
#include <cs50.h>

int collatz(int n, int steps);

int main(void) {
    int n = get_int("What should we find the collatz of? ");
    printf("finding the collatz of %i \n", n);
    collatz(n, 0);
}

int collatz(int n, int steps) {
    if (n <= 1) {
        printf("it took %i steps\n",steps);
        return steps;
    }else if (n % 2 == 0) {
        steps++;
        return collatz(n/2, steps);
    }else {
        steps++;
        return collatz((3 * n) + 1, steps);
    }
}