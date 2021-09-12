/*
Given an array, rotate the array by one position in clock-wise direction.
 

Example 1:

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4
*/

#include <bits/stdc++.h>

using namespace std;

void rotate(int arr[], int n)
{
    n--;
    int temp = arr[n];
    while(n>0){
        arr[n]=arr[n-1];
        n--;
    }
    arr[0]=temp;
    
}

int main(){
    int arr[] = {1,2,3,4,5};
    rotate(arr,5);
    for(int i=0;i<5;i++){
        cout << arr[i] << endl;
    }
}