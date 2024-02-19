/*
Wap to insert an element in an array using function.
*/

#include <stdio.h>

// Function Prototypes
void input(int arr[], int n);
void display(int arr[], int n);
void insert(int arr[], int *n, int ele, int pos);

// Main Function
int main()
{
    int arr[50], n, ele, pos;
    printf("Enter The Size Of The Array: ");
    scanf("%d", &n);
    printf("Enter %d Elements In The Array: ", n);
    input(arr, n);
    printf("Enter The Input Element And Position Of The Array: ");
    scanf("%d%d", &ele, &pos);
    insert(arr, &n, ele, pos);
    display(arr, n);
    return 0;
}

// Input Function
void input(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// Display Function
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

// Insert Element Function
void insert(int arr[], int *n, int ele, int pos)
{
    for (int i = *n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = ele;
    (*n)++;
}
