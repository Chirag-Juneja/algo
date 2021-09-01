/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.begin()== nums.end()){
            return 0;
        }

        set<int> set;
        
        for (auto a : nums)
        {
            set.insert(a);
        }

        int size = set.size();
        int counter = 0;
        
        for(auto itr=set.begin();itr!=set.end();itr++){
            nums[counter]=*itr;
            counter ++;
        }
        return size;    
    }
};

int main()
{
    vector<int> nums = {1,2,3,4,4,5,5,6};
    Solution sol = Solution();
    int k = sol.removeDuplicates(nums);
    for (auto i=0; i<k; i++){
        cout << nums[i] << endl;
    }
    return 0;
}