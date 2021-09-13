/*
You are given an array points where points[i] = [xi, yi] is the coordinates of the ith point on a 2D plane. Multiple points can have the same coordinates.

You are also given an array queries where queries[j] = [xj, yj, rj] describes a circle centered at (xj, yj) with a radius of rj.

For each query queries[j], compute the number of points inside the jth circle. Points on the border of the circle are considered inside.

Return an array answer, where answer[j] is the answer to the jth query.

Input: points = [[1,3],[3,3],[5,3],[2,2]], queries = [[2,3,1],[4,3,1],[1,1,2]]
Output: [3,2,2]
Explanation: The points and circles are shown above.
queries[0] is the green circle, queries[1] is the red circle, and queries[2] is the blue circle.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries)
    {
        vector<int> ans;
        for (auto q : queries)
        {
            int x = q[0];
            int y = q[1];
            int r = q[2];
            int count = 0;
            for (auto point : points)
            {
                int p = point[0];
                int q = point[1];
                int dist = pow(x - p, 2) + pow(y - q, 2);
                if (dist <= pow(r, 2))
                {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> points = {{1, 3}, {3, 3}, {5, 3}, {2, 2}};
    vector<vector<int>> queries = {{2, 3, 1}, {4, 3, 1}, {1, 1, 2}};
    Solution sol = Solution();
    vector<int> count;
    count = sol.countPoints(points, queries);
    for (auto p : count)
    {
        cout << p << endl;
    }
    return 0;
}
