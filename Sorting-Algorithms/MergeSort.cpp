#include <iostream>
using namespace std;

void display(int *arr, int size)
{
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";
}

void merge(int *arr, int start, int mid, int end)
{
    int i = 0, j = 0, k = 0;
    int tmp[end - start + 1];

    i = start;
    j = mid + 1;
    k = 0;

    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            tmp[k++] = arr[i];
            ++i;
        } else {
            tmp[k++] = arr[j];
            ++j;
        }
    }

    while (i <= mid) {
        tmp[k++] = arr[i];
        ++i;
    }

    while (j <= end) {
        tmp[k++] = arr[j];
        ++j;
    }

    k = 0;
    for (int i = start; i <= end; ++i) {
        arr[i] = tmp[k++];
    }
}

void merge_sort(int *arr, int start, int end)
{
    if (start < end) {
        int mid = start + (end - start)/2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int size = 0;
    int arr[] = {10, 9, 3, 2, -1, 0};

    size = sizeof(arr)/sizeof(arr[0]);
    cout << "Original Array:\n";
    display(arr, size);
    cout << "Merge sort:\n";
    merge_sort(arr, 0, size - 1);
    display(arr, size);

    return 0;
}
