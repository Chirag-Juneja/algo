/*
Given an array arr[ ] of size N having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

Example 1:

Input: 
N = 4, arr[] = [1 3 2 4]
Output:
3 4 4 -1
Explanation:
In the array, the next larger element 
to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? 
since it doesn't exist, it is -1.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        vector<long long> result(n, -1);
        stack<long long> s;
        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && arr[i] >= arr[s.top()])
            {
                result[s.top()] = arr[i];
                s.pop();
            }
            s.push(i);
        }
        return result;
    }
};

int main()
{
    vector<long long> arr = {6, 8, 0, 1, 3};
    int n = arr.size();
    Solution sol = Solution();
    arr = sol.nextLargerElement(arr, n);
    for (auto a : arr)
    {
        cout << a << endl;
    }
}