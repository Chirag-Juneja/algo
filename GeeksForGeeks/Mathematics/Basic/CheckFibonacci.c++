/*
Check if a given number N is the Fibonacci number. A Fibonacci number is a number that occurs in the Fibonacci series.

 

Example 1:

Input:
N = 34
Output:
Yes
Explanation:
34 is one of the numbers 
of the Fibonacci series.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string checkFibonacci(int N)
    {
        vector<int> fib = {0, 1, 1};
        if (N == 1)
        {
            return "Yes";
        }
        else
        {
            int index;
            int num;
            while (fib.back() < N)
            {
                index = fib.size();
                num = fib[index - 1] + fib[index - 2];
                if (num == N)
                {
                    return "Yes";
                }
                fib.push_back(num);
            }
            return "No";
        }
    }
};

int main()
{
    cout << Solution().checkFibonacci(35) << endl;
}