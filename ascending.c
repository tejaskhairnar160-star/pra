#include <stdio.h>

int main() 
{
    // Initialize an unsorted array
    int arr[100];
    int temp,n,found=0,searchKey;

    printf("Enter the array size : ");
    scanf("%d",&n);

    // accept the elements

    for(int i=0;i<n;i++)
    {
        printf("Enter the [%d] element : ",i+1);
        scanf("%d",&arr[i]);
    }

    // Nested loops to compare and swap elements

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            // Change '>' to '<' if you want descending order

            if (arr[i] > arr[j]) { 
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the sorted array

    printf("Array in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // 4. Input the element to search

    printf("\nEnter the element to search for: ");
    scanf("%d", &searchKey);

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchKey) {
            printf("Element %d found at index %d (position %d).\n", searchKey, i + 1, i + 1);
            found = 1;
            break; // Exit the loop once found
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", searchKey);
    }
    
    return 0;
}
