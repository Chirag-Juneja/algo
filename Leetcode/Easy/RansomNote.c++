/*
Given two stings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

 

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> um;
        for (auto c : magazine)
        {
            um[c]++;
        }
        for (auto c : ransomNote)
        {
            um[c]--;
            if (um[c] < 0)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    string ransomNote = "aa";
    string magazine = "ab";
    Solution sol = Solution();
    cout << sol.canConstruct(ransomNote, magazine) << endl;
}