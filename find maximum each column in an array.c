#include <stdio.h>
#include <limits.h>
#define ROWS 4
#define COLS 3
int main() {
int matrix[ROWS][COLS] = {{3, 4, 1},{1, 9, 2},{7, 6, 5},{8, 1, 0}};
int max_per_col[COLS];
for (int j = 0; j < COLS; j++) {
int max_val = matrix[0][j];
for (int i = 1; i < ROWS; i++) {
if (matrix[i][j] > max_val) {
max_val = matrix[i][j]; 
}
}
max_per_col[j] = max_val; 
}
printf("Maximum element in each column:\n");
for (int j = 0; j < COLS; j++) {
printf("Column %d: %d\n", j, max_per_col[j]);
}
 return 0;
}
