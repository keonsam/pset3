#include <stdio.h>
#include <cs50.h>

int main(void) {
    int n = get_int("How many numbers are you going to enter? ");
    int sort[n];
    for(int i = 0; i < n; i++) {
        sort[i] = get_int("Enter the value at %i: ", i + 1);
    }
    
    for(int i = 0; i < n; i++) {
        int c = i;
        for(int j = i; j < n; j++) {
            if(sort[j] < sort[c]) {
                c = j;
            }
        }
        int swap = sort[i];
        sort[i] = sort[c];
        sort[c] = swap;
    }
    for(int i = 0; i < n; i++) {
       printf("%i", sort[i]);
    }
    printf("\n");
}