#include <stdio.h>
int main() {
int arr[] = {6,7,8,9,10};
int n = sizeof(arr) / sizeof(arr[0]);
int temp;
for(int i = 0; i < n / 2; i++) {
temp = arr[i];
arr[i] = arr[n - i - 1];
arr[n - i - 1] = temp;
}
printf("Reversed array: ");
for(int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}
