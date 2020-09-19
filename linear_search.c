#include <stdio.h>
#include <cs50.h>

int main(void) {
    int n = get_int("How many numbers are you going to enter? ");
    int sort[n];
    for(int i = 0; i < n; i++) {
        sort[i] = get_int("Enter the value at %i: ", i + 1);
    }
    int search = get_int("Enter search value? ");
    
    for(int i = 0; i < 10; i++) {
        if(sort[i] == search) {
            printf("Found at index %i \n", i);
            return 0;
        }
    }
    printf("Not found \n");
    return 1;
}