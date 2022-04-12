#include <stdio.h>

int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main(void)
{
	int arr[100];
	int n, x;
	printf("Enter number of elements\n");
	scanf("%d", &n);
	printf("Enter number to search\n");
	scanf("%d", &x);
	int result = search(arr, n, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
