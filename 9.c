#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter rows: ");
    scanf("%d", &r);
    printf("Enter columns: ");
    scanf("%d", &c);

    int mat[r][c];
    printf("Enter %d elements:\n", r * c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}