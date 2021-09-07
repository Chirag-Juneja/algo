/*
Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        auto begin = s.begin();
        auto end = s.end()-1;
        while(begin<end){
            if(!iswalnum(*begin)){
                begin++;
                continue;
            }
            if(!iswalnum(*end)){
                end--;
                continue;
            } 
            if (tolower(*begin)==tolower(*end)){
                begin++;
                end--;
            }else{
                return false;
            }
        }
        return true;
    }
};

int main(){
    string s ="A man, a plan, a canal: Panama";
    Solution sol= Solution();
    cout << sol.isPalindrome(s) << endl;
    return 0;
}