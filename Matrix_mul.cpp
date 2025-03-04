#include <iostream>
using namespace std;

#define MAX 10  // Define maximum matrix size

void multiplyMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int r1, int c1, int r2, int c2)
{
    // Initializing result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int r1, c1, r2, c2;
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];

    // Input matrix dimensions
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // Check if multiplication is possible
    if (c1 != r2) {
        cout << "Error! Columns of first matrix must match rows of second matrix." << endl;
        return 1;
    }

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> first[i][j];

    
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> second[i][j];

    multiplyMatrices(first, second, result, r1, c1, r2, c2);


    cout << "Resultant Matrix:\n";
    displayMatrix(result, r1, c2);

    return 0;
}

