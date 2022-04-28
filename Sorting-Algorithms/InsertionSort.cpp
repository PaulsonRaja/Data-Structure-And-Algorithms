#include <iostream>
using namespace std;

void display(int *arr, int size)
{
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insertion_sort(int *arr, int size)
{
    int value;
    int index;

    for (int i = 1; i < size; ++i) {
        value = arr[i];
        index = i;
        while (index > 0 && arr[index - 1] > value) {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = value;
    }
}

int main()
{
    int size = 0;
    int arr[] = {10, 9, 3, 2, -1, 0};

    size = sizeof(arr)/sizeof(arr[0]);

    cout << "Original Array:\n";
    display(arr, size);
    cout << "Insertion sort:\n";
    insertion_sort(arr, size);
    display(arr, size);

    return 0;
}
