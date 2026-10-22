#include <stdio.h>

void reverse(int a[], int l, int r)
{
    if (l >= r)
        return;

    int temp = a[l];
    a[l] = a[r];
    a[r] = temp;

    reverse(a, l + 1, r - 1);
}

int main(void)
{
    int a[100], n;

    printf("Enter array size (1 to 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size.\n");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    reverse(a, 0, n - 1);

    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}