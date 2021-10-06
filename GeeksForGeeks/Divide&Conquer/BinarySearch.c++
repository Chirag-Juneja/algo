/*
Given a sorted array of size N and an integer K, find the position at which K is present in the array using binary search.


Example 1:

Input:
N = 5
arr[] = {1 2 3 4 5} 
K = 4
Output: 3
Explanation: 4 appears at index 3.

Example 2:

Input:
N = 5
arr[] = {11 22 33 44 55} 
K = 445
Output: -1
Explanation: 445 is not present.

Your Task:  
You dont need to read input or print anything. Complete the function binarysearch() which takes arr[], N and K as input parameters and returns the index of K in the array. If K is not present in the array, return -1.


Expected Time Complexity: O(LogN)
Expected Auxiliary Space: O(LogN) if solving recursively and O(1) otherwise.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int binarysearchrecursive(int arr[], int n, int k)
    {
        int index = floor((n - 1) / 2);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        if (arr[index] == k)
        {
            return index;
        }
        if (n == 1)
        {
            return -1;
        }
        if (arr[index] < k)
        {
            int subindex = this->binarysearchrecursive(arr + index + 1, n - index - 1, k);
            if (subindex > -1)
            {
                return subindex + index + 1;
            }
            else
            {
                return -1;
            }
        }
        if (arr[index] > k)
        {
            return this->binarysearchrecursive(arr, index, k);
        }
    }
    int binarysearchiterative(int arr[], int n, int k)
    {
        int lower = 0;
        int upper = n - 1;
        while (lower <= upper)
        {
            for (int i = lower; i <= upper; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            int mid = lower + (upper - lower) / 2;
            if (arr[mid] == k)
            {
                return mid;
            }
            if (arr[mid] > k)
            {
                upper = mid - 1;
            }
            if (arr[mid] < k)
            {
                lower = mid + 1;
            }
        }
        return -1;
    }
};

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 9};
    cout << "index: " << Solution().binarysearchrecursive(arr, 9, 0) << endl;
    cout << "index: " << Solution().binarysearchiterative(arr, 9, 0) << endl;
}