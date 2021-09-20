/*
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".

 

Example 1:

Input: jewels = "aA", stones = "aAAbbbb"
Output: 3
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char> s;
        int count = 0;
        for (auto j : jewels)
        {
            s.insert(j);
        }
        for (auto st : stones)
        {
            if (s.count(st) != 0)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    string jewels = "aA";
    string stones = "aAAbbbb";
    Solution sol = Solution();
    cout << sol.numJewelsInStones(jewels, stones) << endl;
}