/*
Wap to search an element in the array using linear search using function.
*/

#include <stdio.h>
// Function Prototypes
int lsearch(int arr[], int n, int key);

// main Function...
int main()
{
	int arr[100], n, key, i, flag;

	printf("Enter The Number Of Elements: ");
	scanf("%d", &n);
	printf("Enter %d Elements In The Array\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter The Search Element\n");
	scanf("%d", &key);
	flag = lsearch(arr, n, key);
	if (flag == -1)
	{
		printf("%d Is Not Found!\n", key);
	}
	else
	{
		printf("%d Is Found In %d Position", key, flag);
	}
	return 0;
}

// Linear Search
int lsearch(int arr[], int n, int key)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			return i + 1;
		}
	}
	return -1;
}
