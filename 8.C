#include <stdio.h>

void display(int *arr, int n)
{
    int i;

    if (n == 0)
    {
        printf("Array is empty.\n");
        return;
    }

    printf("Array: ");

    for (i = 0; i < n; i++)
        printf("%d ", *(arr + i));

    printf("\n");
}

void insert(int *arr, int *n, int position, int value)
{
    int i;

    if (position < 1 || position > *n + 1)
    {
        printf("Invalid position.\n");
        return;
    }

    for (i = *n; i >= position; i--)
        *(arr + i) = *(arr + i - 1);

    *(arr + position - 1) = value;

    (*n)++;

    printf("Element inserted successfully.\n");
}

int deleteElement(int *arr, int *n, int position, int *deleted)
{
    int i;

    if (position < 1 || position > *n)
        return 0;

    *deleted = *(arr + position - 1);

    for (i = position - 1; i < *n - 1; i++)
        *(arr + i) = *(arr + i + 1);

    (*n)--;

    return 1;
}

int main()
{
    int arr[100];
    int n, i;
    int choice;
    int position, value, deleted;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Display\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                display(arr, n);
                break;

            case 2:
                printf("Enter position: ");
                scanf("%d", &position);

                printf("Enter value: ");
                scanf("%d", &value);

                insert(arr, &n, position, value);
                break;

            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &position);

                if (deleteElement(arr, &n, position, &deleted))
                    printf("Deleted element = %d\n", deleted);
                else
                    printf("Invalid position.\n");

                break;

            case 4:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}