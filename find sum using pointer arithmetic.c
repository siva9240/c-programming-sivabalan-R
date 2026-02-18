#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
   
    for (int *ptr = arr; ptr < arr + n; ptr++) {
        scanf("%d", ptr);
    }
    
  
    long long sum = 0;
    for (int *ptr = arr; ptr < arr + n; ptr++) {
        sum += *ptr;
    }
    
    printf("%lld\n", sum);
    
    free(arr);
    return 0;
}
