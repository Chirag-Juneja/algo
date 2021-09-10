/*
Print all the duplicates in the input string
Time Complexity: O(n)
*/

#include <bits/stdc++.h>

using namespace std;

void duplicates(string s){
    unordered_map<char,int> um;
    auto begin = s.begin();
    auto end = s.end();
    while(begin!=end){
        um[*begin]++;
        begin++;
    }
    for(auto m:um){
        if (m.second>1){
            cout << m.first << ": " << m.second << endl;
        }
    }

}


int main(){
    string s = "geeksforgeeks";
    duplicates(s);
}
