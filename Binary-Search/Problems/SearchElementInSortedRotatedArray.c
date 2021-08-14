#include <stdio.h>
#define MAX 100

int search_element_sorted_rotated_array(int *arr, int size, int key)
{
	int low = 0;
	int high = size - 1;
	int mid = 0;

	while (low <= high) {
		mid = low + (high - low) / 2;
		if (arr[mid] == key) {
			return mid;
		} else if (arr[mid] <= arr[high]) {
                        /* 
			 *  Right part of the mid is sorted, also the 
			 *  we need to check for key > arr[mid] not for
			 *  key >= arr[mid], because this will be captured by
			 *  the first 'if' condition.
			 */
			if (key > arr[mid] && key <= arr[high]) {
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		} else {
			/*
			 * The control reaches here when arr[mid] <= arr[low]
			 * which implies the left half of the array is 
			 * sorted.
			 */
			if (key >= arr[low] && key < arr[mid]) {
				high = mid - 1;
			} else {
				low = mid + 1;
			}
			
		}
	}
	return -1;
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

	printf("Enter the element to be searched:\n");
	scanf("%d", &key);
	printf("\n");
	
	ret = search_element_sorted_rotated_array(arr, size, key);
	if (ret != -1)
		printf("%d present at index: %d.\n", key, ret);
	else
		printf("%d not present in the array.\n", key);
	return 0;
}
