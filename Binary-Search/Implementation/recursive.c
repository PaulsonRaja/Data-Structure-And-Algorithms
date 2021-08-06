#include <stdio.h>
#define MAX 100

int BinarySearch(int *arr, int size, int low, int high,  int key)
{
	int mid = 0;
	
	if (low > high)
		return -1;
	mid = low + (high - low) / 2;
	if (key == arr[mid])
		return mid;
	else if (key < arr[mid])
		return BinarySearch(arr, size, low, mid - 1, key);
	else
		return BinarySearch(arr, size, mid + 1, high, key);
}



int main()
{
	int arr[MAX];
	int size;
	int key;
	int i = 0;
	int low = 0;
	int high = 0;

	printf("Enter the size of the array:\n");
	scanf("%d", &size);
	printf("\n");

	printf("Enter the elements:\n");
	for (i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	printf("\n");

	printf("Enter a number to be searched:\n");
	scanf("%d", &key);
	printf("\n");

	high = size - 1;
	int index = BinarySearch(arr, size, low, high, key);
	if (index != -1) {
		printf("%d present at index: %d.\n", key, index);
	} else {
		printf("%d not present.\n", key);
	}
	return 0;
}
