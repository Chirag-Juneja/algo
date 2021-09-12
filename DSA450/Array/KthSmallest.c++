

#include <bits/stdc++.h>

using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
    {
        sort(arr+l,arr+r);
        return arr[k-1];
    }

int main()
{
    int arr[] = {7,10,4,3,20,15};
    cout << kthSmallest(arr,0,5,3) << endl;
    
}