/*
Given an integer array arr of size n, you need to sum the elements of arr.

Example 1:

Input:
n = 3
arr[] = {3 2 1}
Output: 6
*/

#include <bits/stdc++.h>

using namespace std;

int sumElement(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {3, 2, 1};
    cout << sumElement(arr, 3) << endl;
}