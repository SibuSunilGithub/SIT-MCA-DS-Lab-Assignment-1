/*
WAP in C to store the full marks secured by 10 students using array. Use functions for
input, display, determining maximum, minimum, class sum and class average.
Consider the following prototypes:
void input(int [], int);
void display(int [], int);
int class_max(int [], int);
int class_min(int [], int);
int class_sum(int [], int);
int class_avg(int [], int, int);
*/

#include <stdio.h>

// All functions Initializations
void input(int arr[], int n);
void display(int arr[], int n);
int class_max(int arr[], int n);
int class_min(int arr[], int n);
int class_sum(int arr[], int n);
int class_avg(int arr[], int n);

// Main function...
int main()
{
    int n = 10, arr[n], max, min, sum, avg;

    printf("Enter %d Students Marks: ", n);
    input(arr, n);
    display(arr, n);
    max = class_max(arr, n);
    min = class_min(arr, n);
    sum = class_sum(arr, n);
    avg = class_avg(arr, n);

    printf("\nClass Max = %d\n", max);
    printf("Class Min = %d\n", min);
    printf("Class Sum = %d\n", sum);
    printf("Class Avg = %d\n", avg);

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

// Class Max Function
int class_max(int arr[], int n)
{
    int max = arr[0], i;
    for (i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

// Class Min Function
int class_min(int arr[], int n)
{
    int min = arr[0], i;
    for (i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

// Class Sum Function
int class_sum(int arr[], int n)
{
    int sum = 0, i;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// Class Avg Function
int class_avg(int arr[], int n)
{
    int sum = 0, i;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}
