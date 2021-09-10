/*
Maximum and minimum of an array using minimum number of comparisons
Time Complexity : O(n)
*/

#include <bits/stdc++.h>

using namespace std;
struct maxmin
{
    int max;
    int min;
};

maxmin maximumMinimum(int *arr, int size)
{
    maxmin mm = {arr[0], arr[0]};
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > mm.max)
        {
            mm.max = arr[i];
        }
        if (arr[i] < mm.min)
        {
            mm.min = arr[i];
        }
    }
    return mm;
}

int main()
{
    int arr[] = {1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    maxmin mm = maximumMinimum(arr, size);
    cout << "max: " << mm.max << endl;
    cout << "min: " << mm.min << endl;
}