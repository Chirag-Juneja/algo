#include <bits/stdc++.h>

using namespace std;

class SubrectangleQueries
{
public:
    vector<vector<int>> rectangle;
    SubrectangleQueries(vector<vector<int>> &rectangle)
    {
        this->rectangle = rectangle;
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
        for (int i = row1; i <= row2; i++)
        {
            for (int j = col1; j <= col2; j++)
            {
                this->rectangle[i][j] = newValue;
            }
        }
    }

    int getValue(int row, int col)
    {
        return this->rectangle[row][col];
    }
};

int main()
{
    vector<vector<int>> rectangle = {{1, 2, 1}, {4, 3, 4}, {3, 2, 1}, {1, 1, 1}};
    SubrectangleQueries sol = SubrectangleQueries(rectangle);
    cout << sol.getValue(1, 1) << endl;
    sol.updateSubrectangle(0, 0, 2, 2, 10);
    cout << sol.getValue(1, 1) << endl;
}