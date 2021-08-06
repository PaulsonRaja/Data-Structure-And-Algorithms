#include <stdio.h>
#define MAX 100

int BinarySearch(int *arr, int size, int key)
{
	int low = 0;
	int high = size - 1;
	int mid = 0;

	while (low <= high) {
		mid = low + (high - low)/2;
		if (key == arr[mid]) {
			return mid;
		} else if (key < arr[mid]) {
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
	int size;
	int key;
	int i = 0;

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
	
	int index = BinarySearch(arr, size, key);
	if (index != -1) {
		printf("%d present at index: %d.\n", key, index);
	} else {
		printf("%d not present.\n", key);
	}
	return 0;
}
