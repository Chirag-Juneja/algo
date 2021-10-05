/*
Strong Numbers are the numbers whose sum of factorial of digits is equal to the original number. Given a number N, the task is to check if it is a Strong Number or not. Print 1 if the Number is Strong, else Print 0.

 

Example 1:

Input:
N = 145
Output:
1
Explanation:
1! + 4! + 5! = 145 So, 145 is a Strong
Number and therefore the Output 1.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int factorial(int x)
    {
        if (x > 0)
        {
            return x * factorial(x - 1);
        }
        else
        {
            return 1;
        }
    }
    
    int isStrong(int N)
    {
        int sum = 0;
        int n = N;
        while (n > 0)
        {
            sum += this->factorial(n % 10);
            n /= 10;
        }
        return N == sum;
    }
};

int main()
{
    int N = 40585;
    cout << Solution().isStrong(N) << endl;
}