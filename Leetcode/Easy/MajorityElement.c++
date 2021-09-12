/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3

*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> um;
       for(auto n:nums){
           um[n]++;
           if(um[n]>(nums.size()/2)){
               return n;
           }
       }
       return 0;
    }
};

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    Solution sol = Solution();
    cout << sol.majorityElement(nums) << endl;


}