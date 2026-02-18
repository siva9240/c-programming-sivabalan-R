#include <stdio.h>
#define ROWS 3
#define COLS 3
int main() {
int arr[ROWS][COLS] = {{6, 1, 9},{0, 1, 2},{3, 7, 5}};
int min_val;
printf("The given array is:\n");
for (int i = 0; i < ROWS; i++) {
for (int j = 0; j < COLS; j++) {
printf("%d ", arr[i][j]);
}
printf("\n");
}
printf("\n");
printf("Minimum element of each column is:\n");
for (int j = 0; j < COLS; j++) {
min_val = arr[0][j];
for (int i = 1; i < ROWS; i++) {
if (arr[i][j] < min_val) {
min_val = arr[i][j];
}
}
printf("Column %d: %d\n", j, min_val);
}
return 0;
}
