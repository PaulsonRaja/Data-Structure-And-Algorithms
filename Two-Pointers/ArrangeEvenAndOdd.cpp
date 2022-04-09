#include <iostream>
using namespace std;

void display(int *arr, int size)
{
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void segregate_even_odd(int *arr, int size)
{
    int sptr = 0;
    int eptr = size - 1;

    while (sptr < eptr) {
        while (arr[sptr] % 2 == 0 && sptr < eptr)
            sptr++;
        while (arr[eptr] % 2 == 1 && sptr < eptr)
            eptr--;
        if (sptr < eptr) {
            swap(arr[sptr], arr[eptr]);
        }
    }
}

int main()
{
    int size;
    int arr[] = {1, 2, 3, 4, 5, 8, 9, 10, 0, 7};

    size = sizeof(arr)/sizeof(arr[0]);
    segregate_even_odd(arr, size);
    display(arr, size);
    return 0;

}
