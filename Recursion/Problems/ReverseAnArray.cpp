/*
 *  Reverse an array using recursion.(Functional Recursion)
 */
 
#include <iostream>
using namespace std;

void reverse_array(int *arr, int start, int end)
{
    if (start >= end)
        return;
    swap(arr[start], arr[end]);
    reverse_array(arr, start + 1, end - 1);
}

int main()
{
    int start = 0;
    int end = 0;
    int size = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    
    end = size - 1;
    reverse_array(arr, start, end);
    
    cout << "Output:\n";
    for (auto ele: arr)
        cout << ele << " ";
    return 0;
}
