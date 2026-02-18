#include <stdio.h>


void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    
    if (scanf("%d %d", &a, &b) != 2) return 0;

   
    printf("Before Swap: %d %d\n", a, b);

    swap(&a, &b);


    printf("After Swap: %d %d\n", a, b);

    return 0;
}
