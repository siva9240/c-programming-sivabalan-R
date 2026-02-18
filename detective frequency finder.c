#include <stdio.h>

int main() {
    int N, X;
    int count = 0;

    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &X);
    for(int i = 0; i < N; i++) {
        if(arr[i] == X) {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}

