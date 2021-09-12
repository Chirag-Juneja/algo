/*

Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

Example 1:

Input:
5 3
1 2 3 4 5
1 2 3
Output: 
5
Explanation: 
1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.

*/

#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int> s;
        while(n>0){
            n--;
            s.insert(a[n]);
        }
        while(m>0){
            m--;
            s.insert(b[m]);
        }
        return s.size();
    }
};

int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3};
    Solution sol = Solution();
    cout << sol.doUnion(a,5,b,3) << endl;
}
