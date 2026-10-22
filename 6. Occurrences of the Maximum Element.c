#include <stdio.h>

int findMax(int arr[], int n, int i, int max) {
    if (i == n)
        return max;

    if (arr[i] > max)
        max = arr[i];

    return findMax(arr, n, i + 1, max);
}

int countMax(int arr[], int n, int i, int max, int count) {
    if (i == n)
        return count;

    if (arr[i] == max)
        count++;

    return countMax(arr, n, i + 1, max, count);
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = findMax(arr, n, 0, arr[0]);
    int count = countMax(arr, n, 0, max, 0);

    printf("Maximum element = %d\n", max);
    printf("It occurs %d time(s).\n", count);

    return 0;
}