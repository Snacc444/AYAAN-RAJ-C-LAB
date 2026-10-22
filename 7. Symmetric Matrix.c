#include <stdio.h>

int isSymmetric(int matrix[10][10], int n, int i, int j) {
    if (i >= n)
        return 1;

    if (j >= n)
        return isSymmetric(matrix, n, i + 1, 0);

    if (matrix[i][j] != matrix[j][i])
        return 0;

    return isSymmetric(matrix, n, i, j + 1);
}

int main() {
    int n;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[10][10];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    if (isSymmetric(matrix, n, 0, 0))
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}