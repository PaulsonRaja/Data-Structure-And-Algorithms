#include <iostream>
using namespace std;

void display(int *arr, int size)
{
    for (int i = 0; i < size; ++i) {
	cout << arr[i] << " ";
    }
    cout << "\n";
}

void bubble_sort(int *arr, int size)
{
    int flag = 0;

    for (int i = 0; i < size - 1; ++i) {
	flag = 0;
	for (int j = 0; j < size - i - 1; ++j) {
	    if (arr[j] > arr[j + 1]) {
		swap(arr[j], arr[j + 1]);
		flag = 1;
	    }
	}
	if (flag == 0)
	    break;
    }
}

int main()
{
    int size = 0;
    int arr[] = {10, 9, 3, 2, -1, 0};

    size = sizeof(arr)/sizeof(arr[0]);

    cout << "Original Array:\n";
    display(arr, size);
    cout << "Bubble sort:\n";
    bubble_sort(arr, size);
    display(arr, size);

    return 0;
}
