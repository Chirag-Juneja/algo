/*
Reverse an array
Time Comlexity: O(n)
*/

#include <bits/stdc++.h>

using namespace std;

void reverseArray(int *arr, int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    for (auto a : arr)
    {
        cout << a << endl;
    }
}