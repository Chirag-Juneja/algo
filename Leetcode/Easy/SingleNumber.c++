/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1
*/
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(auto n:nums){
            x^=n;
        }
        return x;
    }
};

int main(){
    vector<int> nums = {4,1,2,1,2};
    Solution sol = Solution();
    cout << sol.singleNumber(nums) << endl;

}