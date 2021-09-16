/*
 * Maximum subarray sum - Kadane's Algorithm
 */

#include <iostream>
#include <climits>
using namespace std;

void brute_force(int *arr, int size)
{
    int sum = 0;
    int res = INT_MIN;

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i; j < size; ++j) {
            for (int k = i; k <= j; ++k) {
                sum += arr[k];
            }
            res = max(res, sum);
            sum = 0;
        }
    }
    printf("Maximum subarray sum (Brute force): %d\n", res);
}

void optimal_approach(int *arr, int size)
{
    int sum = 0;
    int res = INT_MIN;

    for (int i = 0; i < size - 1; ++i) {
        sum = 0;
        for (int j = i; j < size; ++j) {
            sum += arr[j];
            res = max(res, sum);
        }
    }
    printf("Maximum subarray sum (Optimal force): %d\n", res);
}

void kadane_algo(int *arr, int size)
{
    int sum = 0;
    int res = INT_MIN;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
        res = max(res, sum);
        if (sum < 0)
            sum = 0;
    }
    printf("Maximum subarray sum (Kadane's Algorithm): %d\n", res);
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr)/sizeof(arr[0]);

    brute_force(arr, size);
    optimal_approach(arr, size);
    kadane_algo(arr, size);
    return 0;
}
