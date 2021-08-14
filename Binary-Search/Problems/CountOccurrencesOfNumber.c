#include <stdio.h>
#define MAX 100

int binary_search(int *arr, int size, int key, int searchFirst)
{
	int start = 0;
	int mid = 0;
	int end = size - 1;
	int res = -1;

	while (start <= end) {
		mid = start + (end - start) / 2;
		if (arr[mid] == key) {
			res = mid;
			if (searchFirst)
				end = mid - 1;
			else
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
	int first_index = 0;
	int last_index = 0;
	int total_count = 0;
	
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

	first_index = binary_search(arr, size, key, 1);
	if (first_index == -1) {
		printf("Count of %d is %d.\n", key, 0);
	} else {
		last_index= binary_search(arr, size, key, 0);
		total_count = last_index - first_index + 1;
		printf("Count of %d is %d.\n", key, total_count);
	}
	return 0;
}
