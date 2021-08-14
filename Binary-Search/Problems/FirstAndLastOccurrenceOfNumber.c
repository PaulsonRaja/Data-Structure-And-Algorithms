#include <stdio.h>
#define MAX 100

int first_occurrence(int *arr, int size, int key)
{
	int start = 0;
	int mid = 0;
	int end = size - 1;
	int res = -1;

	while (start <= end) {
		mid = start + (end - start) / 2;
		if (arr[mid] == key) {
			res = mid;
			end = mid - 1;
		} else if (arr[mid] < key) {
			start = mid + 1;
		} else {
			end = mid - 1;
		}
	}
	return res;
}

int last_occurrence(int *arr, int size, int key)
{
	int start = 0;
	int mid = 0;
	int end = size - 1;
	int res = -1;

	while (start <= end) {
		mid = start + (end - start) / 2;
		if (arr[mid] == key) {
			res = mid;
			start = mid + 1;
		} else if (arr[mid] < key) {
			start = mid + 1;
		} else {
			end = mid - 1;
		}
	}
	return res;
}

int main()
{
	int arr[MAX];
	int size = 0;
	int key = 0;
	int ret = 0;
	
	printf("Enter the size of the array:\n");
	scanf("%d", &size);
	printf("\n");
	
	printf("Enter the elements:\n");
	for (int i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	printf("\n");

	printf("Enter the key:\n");
	scanf("%d", &key);
	printf("\n");

	ret = first_occurrence(arr, size, key);
	if (ret != -1)
		printf("First occurrence of number: %d is at index %d.\n", key, ret);
	else
		printf("%d number not present in the array.", key);
	printf("\n");

	
	ret = last_occurrence(arr, size, key);
	if (ret != -1)
		printf("Last occurrence of number: %d is at index %d.\n", key, ret);
	else
		printf("%d number not present in the array.", key);
	return 0;
}
