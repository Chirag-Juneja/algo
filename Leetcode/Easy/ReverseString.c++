/*

Write a function that reverses a string. The input string is given as an array of characters s.
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        auto begin = s.begin();
        auto end = s.end()-1;
        while(begin<=end){
            swap(*begin,*end);
            begin++;
            end--;
        }
        
    }
};

int main(){
    vector<char> s = {'h','e','l','l','o'};
    Solution sol = Solution();
    sol.reverseString(s);
    for( auto c:s){
        cout  << c << endl;
    }
}