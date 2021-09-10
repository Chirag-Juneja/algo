
#include <bits/stdc++.h>
using namespace std;

int isPlaindrome(char S[])
{
    int begin = 0;
    int end = strlen(S)-1;
    while(begin <= end){
        if (S[begin]==S[end]){
            begin++;
            end--;
        }else{
            return 0;
        }
    }
    return 1; 
}

int main(){
    char S[] = "abb";
    cout << isPlaindrome(S) << endl;
    return 0;
}