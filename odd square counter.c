#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    int count = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        
        if(arr[i] % 2 != 0) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

