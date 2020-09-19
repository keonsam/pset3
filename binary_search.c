#include <cs50.h>

int sort(int search, int array[], int start, int end);

int main(void) {
    int n = get_int("How many numbers are you going to enter? ");
    int sorted[n];
    for(int i = 0; i < n; i++) {
        sorted[i] = get_int("Enter the value at %i: ", i + 1);
    }
    
    int search = get_int("What search value? ");
    return sort(search, sorted, 0, n -1);
};

int sort(int search, int array[], int start, int end) {
    int h = (start + end) / 2;
    if(start > end ) {
        printf("Not Found! \n");
        return 1;
    } else if (array[h] == search) {
        printf("Found at %i array index \n", h);
        return 0;
    } else if (array[h] < search) {
        start = h + 1;
        return sort(search, array, start, end);
    } else {
        end = h - 1;
        return sort(search, array, start, end);
    }
}