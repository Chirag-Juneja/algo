/*Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best=nums[0];
        int sum=nums[0];
        for (int i =1;i<nums.size();i++){
            sum = max(nums[i],sum+nums[i]);
            best = max(sum,best); 
        }
        return best;
    }
};

int main(){
    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution sol = Solution();
    cout << sol.maxSubArray(nums) << endl;
}