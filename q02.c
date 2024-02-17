/*
Wap to store cgpa of n students and display only those cgpa which are > 9 using function.
*/

#include <stdio.h>

void display(float arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 9)
        {
            printf("%.2f", arr[i]);
        }
    }
}

int main()
{
    int i, n;
    printf("Enter Number Of Students: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter %d Students CGPA: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    printf("\n");
    display(arr, n);
    return 0;
}