#include <stdio.h>
#include <limits.h>

void columnSums(int matrix[10][10], int rows, int cols,
                int j, int i, int sum, int *minSum, int *minCol) {
    if (j >= cols)
        return;

    if (i < rows) {
        sum += matrix[i][j];
        columnSums(matrix, rows, cols, j, i + 1, sum, minSum, minCol);
    } else {
        if (sum < *minSum) {
            *minSum = sum;
            *minCol = j;
        }
        columnSums(matrix, rows, cols, j + 1, 0, 0, minSum, minCol);
    }
}

int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[10][10];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    int minSum = INT_MAX, minCol = 0;
    columnSums(matrix, rows, cols, 0, 0, 0, &minSum, &minCol);

    printf("Column with minimum sum: %d\n", minCol);
    printf("Minimum column sum: %d\n", minSum);

    return 0;
}