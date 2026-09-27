//Array Traversal, Sum, and Average//
#include <stdio.h>
int main ()
{
    int n, a[100], sum = 0;
    float avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Array elements: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    avg = (float)sum / n;
    printf("\nSum: %d\nAverage: %.2f\n", sum, avg);

    return 0;
}