/*
Wap to delete an element from array where element to be deleted is given using function.
*/
#include <stdio.h>

// Function declarations
void input(int arr[], int n);
void display(int arr[], int n);
int lsearch(int arr[], int n, int key);
void delete(int arr[], int n, int pos);

// main Function
int main()
{
	int arr[100], n, key, pos;
	printf("Enter The Number Of Elements: ");
	scanf("%d", &n);
	printf("Enter %d Array Elements: ", n);
	input(arr, n);
	printf("Array Elements Are: ");
	display(arr, n);
	printf("\n");
	printf("Enter The Element To Delete: ");
	scanf("%d", &key);
	pos = lsearch(arr, n, key);
	if (pos == -1)
	{
		printf("Deletion Not Possible!");
	}
	else
	{
		delete (arr, n, pos);
		n--;
	}
	display(arr, n);
	printf("\n");
	return 0;
}

// input function
void input(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

// display function
void display(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
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

// Delete Array
void delete(int arr[], int n, int pos)
{
	int i;
	for (i = pos; i < n; i++)
	{
		arr[i - 1] = arr[i];
	}
}
