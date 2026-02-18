#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[1000];

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int isPalindrome = 1;

    for(int i = 0; i < N / 2; i++) {
        if(arr[i] != arr[N - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("YES");
    else
        printf("NO");

    return 0;
}

