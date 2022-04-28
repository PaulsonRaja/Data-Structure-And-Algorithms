#include <iostream>
using namespace std;

void display(int *arr, int size)
{
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void selection_sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}

int main()
{
    int size = 0;
    int arr[] = {10, 9, 3, 2, -1, 0};

    size = sizeof(arr)/sizeof(arr[0]);

    cout << "Original Array:\n";
    display(arr, size);
    cout << "Selection sort:\n";
    selection_sort(arr, size);
    display(arr, size);

    return 0;
}
