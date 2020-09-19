#include <stdio.h>
#include <cs50.h>

int main(void) {
    int n = get_int("How many numbers are you going to enter? ");
    int sort[n];
    for(int i = 0; i < n; i++) {
        sort[i] = get_int("Enter the value at %i: ", i + 1);
    }
    
    for(int i=1; i < n; i++) {
        int temp = sort[i];
        int j = i -1;
        while(temp < sort[j] && j >=0) {
            sort[j + 1] = sort[j];
            j--;
        }
        sort[j + 1] = temp;
    }
    for(int i = 0; i < n; i++) {
        printf("%i", sort[i]);
    }
    printf("\n");
}