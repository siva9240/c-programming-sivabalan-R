#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A, B;

    
    scanf("%d %d", &A, &B);

    
    swap(&A, &B);

    printf("%d %d", A, B);

    return 0;
