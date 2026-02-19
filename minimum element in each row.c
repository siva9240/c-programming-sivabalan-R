#include <stdio.h>

int main() {
    int n, m;

    scanf("%d %d", &n, &m);   

    int matrix[n][m];


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

 
    for(int i = 0; i < n; i++) {
        int min = matrix[i][0]; 

        for(int j = 1; j < m; j++) {
            if(matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }

        printf("%d\n", min);
    }

    return 0;
}
