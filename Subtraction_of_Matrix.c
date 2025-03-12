#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], result[ROWS][COLS];
    int i, j;

    // Input first matrix
    printf("Enter elements of the first matrix (%dx%d):\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of the second matrix (%dx%d):\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding matrices
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the addition result
    printf("\nResultant matrix after addition:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    // Subtracting matrices
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Displaying the subtraction result
    printf("\nResultant matrix after subtraction:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

