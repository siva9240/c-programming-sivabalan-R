#include <stdio.h>
#include <limits.h> 

#define ROWS 3
#define COLS 4

int main() {
int arr[ROWS][COLS] = {
{5, 2, 8, 4},
{1, 9, 6, 3},
{7, 4, 0, 5}
};
printf("Matrix elements:\n");
for (int i = 0; i < ROWS; i++) {
for (int j = 0; j < COLS; j++) {
printf("%d ", arr[i][j]);
}
printf("\n");
}
printf("\nMinimum element of each row:\n");
for (int i = 0; i < ROWS; i++) {
int min_val = arr[i][0];
for (int j = 1; j < COLS; j++) {
if (arr[i][j] < min_val) {
 min_val = arr[i][j];
}
}
printf("Row %d: %d\n", i, min_val);
}
return 0;
}
