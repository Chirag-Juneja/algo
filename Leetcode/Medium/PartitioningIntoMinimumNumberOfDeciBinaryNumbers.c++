/*
A decimal number is called deci-binary if each of its digits is either 0 or 1 without any leading zeros. For example, 101 and 1100 are deci-binary, while 112 and 3001 are not.

Given a string n that represents a positive decimal integer, return the minimum number of positive deci-binary numbers needed so that they sum up to n.

 

Example 1:

Input: n = "32"
Output: 3
Explanation: 10 + 11 + 11 = 32
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minPartitions(string n)
    {
        int num = 0;
        int c;
        for (int i = 0; i < n.size(); i++)
        {
            c = int(n.c_str()[i] - 48);
            num = max(c, num);
        }
        return num;
    }
};

int main()
{
    string n = "27346209830709182346";
    Solution sol = Solution();
    cout << sol.minPartitions(n) << endl;
    return 0;
}