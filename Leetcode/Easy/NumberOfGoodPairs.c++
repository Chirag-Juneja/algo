/*
Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.

 

Example 1:

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int pairs=0;
        unordered_map<int,int> umap;
        for(int n:nums){
            umap[n]++;
        }
        for(auto m:umap){
            if(m.second>1){
                pairs+=(m.second*(m.second-1)/2);
            }
        }
        return pairs;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 1, 1, 3};
    cout << Solution().numIdenticalPairs(nums) << endl;
}