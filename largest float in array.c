#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    float arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%f", &arr[i]);
    }

    float max = arr[0];
    for(int i = 1; i < N; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%.2f\n", max);

    return 0;
}
