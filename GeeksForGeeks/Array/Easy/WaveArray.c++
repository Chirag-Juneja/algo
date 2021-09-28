/*
Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array and return it
In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....

Example 1:

Input:
n = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after 
sorting it in wave form are 
2 1 4 3 5.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    void convertToWave(vector<int>& arr, int n){
        for(int i=0;i+1<n;i+=2){
            swap(arr[i],arr[i+1]);
        }
    }
};

int main(){
    vector<int> v = {1,2,3,4,5};
    Solution sol = Solution();
    sol.convertToWave(v,v.size());
    for(auto a:v){
        cout << a << endl;
    }
}