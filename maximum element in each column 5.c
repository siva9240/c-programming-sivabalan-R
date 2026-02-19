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

    
    for(int j = 0; j < m; j++) {
        int max = matrix[0][j];  

        for(int i = 1; i < n; i++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }

        printf("%d\n", max);
    }

    return 0;
}

