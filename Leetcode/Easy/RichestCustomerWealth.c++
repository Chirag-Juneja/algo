/*
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

 

Example 1:

Input: accounts = [[1,2,3],[3,2,1]]
Output: 6
Explanation:
1st customer has wealth = 1 + 2 + 3 = 6
2nd customer has wealth = 3 + 2 + 1 = 6
Both customers are considered the richest with a wealth of 6 each, so return 6.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        vector<int> amount;
        for (auto a : accounts)
        {
            int total = 0;
            for (auto x : a)
            {
                total += x;
            }
            amount.push_back(total);
        }
        return *max_element(amount.begin(), amount.end());
    }
};

int main()
{
    vector<vector<int>> accounts = {{1, 5}, {7, 3}, {3, 5}};
    cout << Solution().maximumWealth(accounts);
}