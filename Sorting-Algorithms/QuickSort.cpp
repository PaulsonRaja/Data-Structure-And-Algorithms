M#include <iostream>
using namespace std;

void display(int *arr, int size)
{
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int partition(int *arr, int start, int end)
{
    int pivot;
    int pIndex;

    pIndex = start;
    pivot = arr[end];
    for (int i = start; i < end; ++i) {
        if (arr[i] < pivot) {
            swap(arr[i], arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[pIndex], arr[end]);
    return pIndex;
}

void quick_sort(int *arr, int start, int end)
{
    int pIndex;

    if (start < end) {
        pIndex = partition(arr, start, end);
        quick_sort(arr, start, pIndex - 1);
        quick_sort(arr, pIndex + 1, end);
    }
}

int main()
{
    int size = 0;
    int arr[] = {10, 9, 3, 2, -1, 0};

    size = sizeof(arr)/sizeof(arr[0]);

    cout << "Original Array:\n";
    display(arr, size);
    cout << "Quick sort:\n";
    quick_sort(arr, 0, size - 1);
    display(arr, size);

    return 0;
}
