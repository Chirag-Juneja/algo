/*
You are given a string S, the task is to reverse the string using stack.

 

Example 1:


Input: S="GeeksforGeeks"
Output: skeeGrofskeeG
*/

#include<bits/stdc++.h>
using namespace std;

char* reverse(char *S, int len)
{
    stack<char> s;
    for(int i=0; i<len;i++){
        s.push(S[i]);
    }
    for(int i=0;i <len;i++){
        S[i] = s.top();
        s.pop();
    }
    return S;
}   

int main(){
    char S[] ="GeeksforGeeks";
    int len;
    len = strlen(S);
    cout << reverse(S,len) << endl;

}