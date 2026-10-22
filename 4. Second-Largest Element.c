#include <stdio.h>

void findSecond(int a[], int n, int i,
                int *l, int *s, int *hS)
{
    if (i == n)
        return;

    if (a[i] > *l) {
        *s = *l;
        *l= a[i];
        *hS = 1;
    }
    else if (a[i] < *l) {
        if (!*hS || a[i] > *s) {
            *s = a[i];
            *hS = 1;
        }
    }

    findSecond(a, n, i + 1, l, s, hS);
}

int main(void)
{
    int a[100], n;
    int l, s = 0, hS = 0;

    printf("Enter array size (1 to 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size.\n");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    l = a[0];
    findSecond(a, n, 1, &l, &s, &hS);

    if (hS)
        printf("Second-largest distinct element = %d\n", s);
    else
        printf("Fewer than two distinct elements exist.\n");

    return 0;
}