/*
Given an array A[] of size n. The task is to find the largest element in it.
 

Example 1:

Input:
n = 5
A[] = {1, 8, 7, 56, 90}
Output:
90
Explanation:
The largest element of given array is 90.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int result = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > result)
            {
                result = arr[i];
            }
        }
        return result;
    }
};

int main()
{

    vector<int> arr = {1, 2, 0, 3, 2, 4, 5};
    Solution sol = Solution();
    cout << sol.largest(arr, arr.size()) << endl;
}