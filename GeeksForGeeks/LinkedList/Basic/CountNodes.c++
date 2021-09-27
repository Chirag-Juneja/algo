/*
Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

Example 1:

Input:
LinkedList: 1->2->3->4->5
Output: 5
Explanation: Count of nodes in the 
linked list is 5, which is its length.
*/

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    int getCount(struct Node *head)
    {
        int count = 0;
        while (head != NULL)
        {
            count++;
            head = head->next;
        }
        return count;
    }
};

int main()
{
    vector<int> v = {2, 4, 6, 7, 5, 1, 0};
    Node *head = new Node(v[0]);
    Node *current = head;
    for (int i = 1; i < v.size(); i++)
    {
        current->next = new Node(v[i]);
        current = current->next;
    }
    Solution sol = Solution();
    cout << sol.getCount(head) << endl;
    return 0;
}