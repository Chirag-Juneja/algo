/*
You are given an array A, of N elements. Find minimum index based distance between two elements of the array, x and y.

Example 1:

Input:
N = 4
A[] = {1,2,3,2}
x = 1, y = 2
Output: 1
Explanation: x = 1 and y = 2. There are
two distances between x and y, which are
1 and 3 out of which the least is 1.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int xi=-1;
        int yi=-1;
        vector<int> d;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                xi=i;
            }
            if(a[i]==y){
                yi=i;
            }
            if(xi>=0 && yi>=0){
                d.push_back(abs(xi-yi));
            }
        }
        if(d.size()>0){
            return *min_element(d.begin(),d.end());
        }
        return -1;
    }
};

int main(){
    int N = 4;
    int A[] = {1,2,3,2};
    int  x = 1, y = 2;
    cout << Solution().minDist(A,N,x,y) << endl;
}