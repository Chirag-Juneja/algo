/*
Reverse First K elements of Queue 
Easy Accuracy: 57.92% Submissions: 35855 Points: 2
Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.

Only following standard operations are allowed on queue.

enqueue(x) : Add an item x to rear of queue
dequeue() : Remove an item from front of queue
size() : Returns number of elements in queue.
front() : Finds front item.
Example 1:

Input:
5 3
1 2 3 4 5

Output: 
3 2 1 4 5

Explanation: 
After reversing the given
input from the 3rd position the resultant
output will be 3 2 1 4 5.
*/

#include <bits/stdc++.h>

using namespace std;

queue<int> modifyQueue(queue<int> q, int k)
{
    stack<int> s;
    queue<int> result;
    for (int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        result.push(s.top());
        s.pop();
    }
    while (!q.empty())
    {
        result.push(q.front());
        q.pop();
    }
    return result;
}

int main()
{
    queue<int> q;
    vector<int> v = {1, 2, 3, 4, 5};
    for (auto element : v)
    {
        q.push(element);
    }
    int k = 3;
    q = modifyQueue(q, k);
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}