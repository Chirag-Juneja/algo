/*
Given a string of length N, made up of only uppercase characters 'R' and 'G', where 'R' stands for Red and 'G' stands for Green.Find out the minimum number of characters you need to change to make the whole string of the same colour.

Example 1:

Input:
N=5
S="RGRGR"
Output:
2
Explanation:
We need to change only the 2nd and 
4th(1-index based) characters to 'R', 
so that the whole string becomes 
the same colour.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int RedOrGreen(int N, string S)
    {
        unordered_map<char, int> um;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == 'R')
            {
                um['R']++;
            }
            if (S[i] == 'G')
            {
                um['G']++;
            }
        }
        return min(um['R'], um['G']);
    }
};

int main()
{
    string s = "RGRGRGG";
    Solution sol = Solution();
    cout << sol.RedOrGreen(s.size(), s) << endl;
}