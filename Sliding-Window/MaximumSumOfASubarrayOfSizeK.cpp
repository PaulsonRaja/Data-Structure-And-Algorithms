#include <iostream>
#include <vector>
using namespace std;

int max_sum_subarray_size_k(vector<int> arr, int k)
{
    int max_sum = 0;
    int window_sum = 0;
    int size = arr.size();

    for (int i = 0; i < k; ++i)
        window_sum += arr[i];
    max_sum = window_sum;
    for (int i = k; i < size; ++i) {
        window_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, window_sum);
    }
    return max_sum;

}

int main()
{
    int k = 3;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

    int sum = max_sum_subarray_size_k(arr, k);
    cout << "The maximum sum of a subarray of size " << k << ": " << sum << endl;
    return 0;
}
