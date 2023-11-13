#include <stdio.h>

int main() {
    int row, col, i, j;
    
    
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);
    
    
    int A[row][col], B[row][col], C[row][col];
    
    
    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
   
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
  
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
     // Display the sum matrix C
    printf("Sum of Matrices A and B:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

