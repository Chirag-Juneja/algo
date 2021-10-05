/*
Given a positive integer N. Calculate the Fibonacci series till the number N. If N is a part of the series, include N as well.

Example 1:

Input:
N = 1
Output:
0 1 1
Explanation:
Since 1 is part of the Fibonacci series,
the required series is upto 1.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> nFibonacci(int N)
    {
        vector<int> fib = {0, 1, 1};
        int index;
        int num;
        while (fib.back() < N)
        {
            index = fib.size();
            num = fib[index - 1] + fib[index - 2];
            if (num > N)
            {
                break;
            }
            fib.push_back(num);
        }
        return fib;
    }
};

int main()
{
    vector<int> v = Solution().nFibonacci(1);
    for (auto x : v)
    {
        cout << x << endl;
    }
}