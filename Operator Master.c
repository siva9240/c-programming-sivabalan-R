#include <stdio.h>

int main() {
    int A, B;

   
    scanf("%d %d", &A, &B);

 
    printf("Addition: %d\n", A + B);
    printf("Subtraction: %d\n", A - B);
    printf("Multiplication: %d\n", A * B);
    printf("Division: %d\n", A / B);
    printf("Modulus: %d\n", A % B);

  
    printf("A > B: %d\n", A > B);

 
    printf("Logical AND: %d\n", A && B);

  
    printf("Bitwise AND: %d\n", A & B);


    printf("Larger: %d\n", (A > B) ? A : B);

    return 0;
}
