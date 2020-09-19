#include <stdio.h>
#include <cs50.h>

int main(void) {
    int n = get_int("How many numbers are you going to enter? ");
    int sort[n];
    for(int i = 0; i < n; i++) {
        sort[i] = get_int("Enter the value at %i: ", i + 1);
    }
    
    for(int i = 0; i < n; i++) {
        int swap = 0;
        for(int j=0; j < n-(i+1); j++) {
            if (sort[j] > sort[j + 1]) {
                swap = 1;
                int c = sort[j + 1];
                sort[j + 1] = sort[j];
                sort[j] = c;
            }
        }
        if(swap == 0) {
                break;
            }
    }
    for(int i = 0; i < n; i++) {
            printf("%i", sort[i]);
    }
    printf("\n");
}