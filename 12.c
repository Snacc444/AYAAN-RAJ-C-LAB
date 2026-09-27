#include <stdio.h>

int main() {
    int r, c, i, j, sum;
    printf("Enter rows: ");
    scanf("%d", &r);
    printf("Enter columns: ");
    scanf("%d", &c);

    int mat[r][c];
    printf("Enter %d elements:\n", r * c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    printf("\nRow sums:\n");
    for (i = 0; i < r; i++) {
        sum = 0;
        for (j = 0; j < c; j++) sum += mat[i][j];
        printf("Row %d: %d\n", i, sum);
    }

    printf("\nColumn sums:\n");
    for (j = 0; j < c; j++) {
        sum = 0;
        for (i = 0; i < r; i++) sum += mat[i][j];
        printf("Column %d: %d\n", j, sum);
    }

    return 0;
}