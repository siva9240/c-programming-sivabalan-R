#include <stdio.h>

/**
 * Swaps two integers using their memory addresses.
 * *x and *y are pointers that "point" to the original variables in main.
 */
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;       
    *y = temp;     
}

int main() {
    int a, b;

   
    if (scanf("%d %d", &a, &b) != 2) {
        return 0;
    }

    
    swap(&a, &b);


    printf("After Swap: %d %d\n", a, b);

    return 0;
}
