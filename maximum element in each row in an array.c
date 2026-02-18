#include <stdio.h>
int main() {
int rows = 3;
int cols = 4;
int matrix[3][4] = {{1, 2, 3, 4},{5, 9, 7, 8},{9, 10, 11, 12}};
int max_per_row[3];
for (int i = 0; i < rows; i++) {
int max_val = matrix[i][0];
for (int j = 1; j < cols; j++) {
if (matrix[i][j] > max_val) {
max_val = matrix[i][j]; 
}
}
max_per_row[i] = max_val;
}
printf("Maximum element in each row:\n");
for (int i = 0; i < rows; i++) {
printf("Row %d: %d\n", i, max_per_row[i]);
}
 return 0;
}
