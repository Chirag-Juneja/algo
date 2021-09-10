/*
First and last occurrences of x 
Given a sorted array arr containing n elements with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

Example 1:

Input:
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
Output:  2 5
Explanation: First occurrence of 5 is at index 2 and last
             occurrence of 5 is at index 5. 

Time Complexity: O(n)
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> find(int arr[], int n, int x)
{
    vector<int> pos = {-1, -1};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            if (pos[0] < 0)
            {
                pos[0] = i;
                pos[1] = i;
            }
            else
            {
                pos[1] = i;
            }
        }
    }
    return pos;
}

int main()
{
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int n = 9;
    int x = 5;
    vector<int> sol;
    sol = find(arr, n, x);
    for (auto a : sol)
    {
        cout << a << " ";
    }
}