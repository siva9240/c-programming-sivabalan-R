#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

     for(int i = 0; i < N / 2; i++) {
        sum1 += arr[i];
    }

    
    for(int i = N / 2; i < N; i++) {
        sum2 += arr[i];
    }

    if(sum1 == sum2) {
        printf("BALANCED");
    } else {
        printf("NOT BALANCED");
    }

    return 0;
}

