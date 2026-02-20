#include <stdio.h>

int main() {
    int M;

   
    scanf("%d", &M);

    
    if (M >= 90 && M <= 100) {
        printf("A");
    } 
    else if (M >= 75) {
        printf("B");
    } 
    else if (M >= 50) {
        printf("C");
    } 
    else {
        printf("Fail");
    }

    return 0;
}
