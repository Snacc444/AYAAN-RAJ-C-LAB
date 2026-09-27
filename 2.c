//Search an element in an Array//
#include <stdio.h>
int main ()
{
    int n, a[100], key, count = 0;
    
    printf("Enter number of element");
    scanf("%d",&n);

    printf("Enter the element:\n");
    for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

    printf("Enter element to search:");
    for (int i = 0; i < n; i++){
        if (a[i] == key){
            printf("%d", i + 1);
            count ++;
        }
    }
    if (count ==0)
    printf("Element not found");
else 
    printf("\nTotal occurrenc = %d", count);

    return 0;
}