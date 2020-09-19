#include <stdio.h>
#include <cs50.h>

void merge_sort(int a[], int l, int r);
void merge(int a[], int l, int h, int r);

int main(void) {
        int n = get_int("How many numbers are you going to enter? ");
    int sort[n];
    for(int i = 0; i < n; i++) {
        sort[i] = get_int("Enter the value at %i: ", i + 1);
    }
    
    merge_sort(sort, 0, n -1);
    
    for(int i = 0; i < n; i++) {
       printf("%i", sort[i]);
    }
    printf("\n");
}

void merge_sort(int a[], int l, int r) {
    if(l < r) {
        int h = (l + r) / 2;
        merge_sort(a, l, h);
        merge_sort(a, h+1, r);
        merge(a, l, h, r);
    }
}

void merge(int a[], int l, int h, int r) {
    int temp[r + 1];
    int i, j, k;
    i = l;
    j = h +1;
    k = 0;
    
    while(i <= h && j <=r) {
        if(a[i] < a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }
    
    while(i <= h) {
       temp[k++] = a[i++];
    }
    
    while(j <= r) {
       temp[k++] = a[j++];
    }
    
    for(i = l, j=0; i <= r; i++, j++) {
        a[i] = temp[j];
    }
}