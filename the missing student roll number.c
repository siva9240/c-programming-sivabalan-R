#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int sum = 0, num;
    int total = N * (N + 1) / 2;

    for(int i = 0; i < N - 1; i++) {
        scanf("%d", &num);
        sum += num;
    }

    int missing = total - sum;

    printf("%d\n", missing);

    return 0;
}

