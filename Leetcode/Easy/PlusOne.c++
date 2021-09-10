/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int carry = 1;
        int size = digits.size();
        for (int i = size - 1; i >= 0; i--)
        {
            digits[i] += carry;
            if (digits[i] / 10 > 0)
            {
                digits[i] = digits[i] % 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
        }
        if (carry > 0)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

int main()
{
    vector<int> digits = {3, 8, 9};
    Solution sol = Solution();
    digits = sol.plusOne(digits);
    for (auto d : digits)
    {
        cout << d << endl;
    }
    return 0;
}