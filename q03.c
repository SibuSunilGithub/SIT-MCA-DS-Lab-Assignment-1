/*
Wap to calculate standard deviation of the elements present in the array using 
function.
*/

#include<stdio.h>
#include<math.h>
// Function Prototypes
void input(int arr[], int n);
float standard_deviation(int arr[], int n);

// Main Driver Program
int main()
{
    int arr[50], n;
    float sd;
    printf("Enter The Number Of Input Data:");
    scanf("%d", &n);
    printf("Enter %d Elements In The Array: ", n);
    input(arr, n);
    sd = standard_deviation(arr, n);
    printf("Standard Deviation Is: %f", sd);
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

// Standard Deviation
float standard_deviation(int arr[], int n)
{
    float mean, sum = 0.0, sd = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    mean = sum/10;
    
    for (int i = 0; i < n; i++)
    {
        sd += pow(arr[i] - mean, 2);
    }
    return sqrt(sd/10);
}