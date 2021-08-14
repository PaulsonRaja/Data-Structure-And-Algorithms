#include <stdio.h>
#define MAX 100

int times_sorted_rotated(int *arr, int size, int key)
{
	int low = 0;
	int mid = 0;
	int high = size - 1;
	int next = 0;
	int prev = 0;

	while (low <= high) {
		if (arr[low] <= arr[high])
			return low;
		mid = low + (high - low) / 2;
		next = (mid + 1) % size;
		prev = (mid + size - 1) % size;
		if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
			return mid;
		} else if (arr[mid] <= arr[high]) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return -1;
}

int main()
{
	int arr[MAX];
	int size = 0;
	int key = 0;
	int count = 0;
	
	printf("Enter the size of the array:\n");
	scanf("%d", &size);
	printf("\n");


	printf("Enter the elements:\n");
	for (int i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	printf("\n");

	count = times_sorted_rotated(arr, size, key);
	printf("Count of number of times rotated: %d.\n", count);
	return 0;
}
