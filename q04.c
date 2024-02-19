/*
Wap to update each element of the array by multiplying 10 using function.
*/

#include <stdio.h>

// Function Prototype
void update(int arr[], int n, int mul);
void input(int arr[], int n);
void display(int arr[], int n);

int main()
{
    int arr[50], n, mul = 10;

    printf("Enter The Number Of Input Data:");
    scanf("%d", &n);
    printf("Enter %d Elements In The Array: ", n);
    input(arr, n);
    update(arr, n, mul);
    display(arr, n);

    return 0;
}

// Input Function
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// Update Each Element By 10
void update(int arr[], int n, int mul)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 10;
    }
}

// Display Function
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
            printf("%d ", arr[i]);
    }
}