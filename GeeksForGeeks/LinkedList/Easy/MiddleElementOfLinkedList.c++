/*
Given a singly linked list of N nodes.
The task is to find the middle of the linked list. For example, if the linked list is
1-> 2->3->4->5, then the middle node of the list is 3.
If there are two middle nodes(in case, when N is even), print the second middle element.
For example, if the linked list given is 1->2->3->4->5->6, then the middle node of the list is 4.

Example 1:

Input:
LinkedList: 1->2->3->4->5
Output: 3 
Explanation: 
Middle of linked list is 3.
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
    int getMiddle(Node *head)
    {
        Node *fast, *slow;
        fast = head;
        slow = head;
        while (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
            if (fast->next == NULL)
            {
                break;
            }
            fast = fast->next;
        }
        return slow->data;
    }
};

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 6};
    Node *head = new Node(v[0]);
    Node *current = head;
    for (int i = 1; i < v.size(); i++)
    {
        current->next = new Node(v[i]);
        current = current->next;
    }
    Solution sol = Solution();
    cout << sol.getMiddle(head) << endl;
}