/*

Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

Notice that you may not slant the container.

Example:
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

*/

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxarea = 0;
        int front = 0;
        int back = height.size() - 1;
        while (front <= back)
        {
            maxarea = max(maxarea, (back - front) * min(height[front], height[back]));
            if (height[front] > height[back])
            {
                back--;
            }
            else
            {
                front++;
            }
        }
        return maxarea;
    }
};

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution sol = Solution();
    cout << sol.maxArea(height) << endl;
}