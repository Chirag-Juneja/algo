/*
class Solution {
  public:
    int countNumberswith4(int N) {
        int count=0;
        for(int i=0;i<=N;i++){
            int x = i;
            while(x>0){
                if (x%10 == 4){
                    count++;
                }
                x/=10;
            }
        }
        return count;
    }
};
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int countNumberswith4(int N) {
        int count=0;
        for(int i=1;i<=N;i++){
            int x = i;
            while(x>0){
                if (x%10 == 4){
                    count++;
                    break;
                }
                x/=10;
            }
        }
        return count;
    }
};

int main(){
    cout << Solution().countNumberswith4(100) << endl;
}