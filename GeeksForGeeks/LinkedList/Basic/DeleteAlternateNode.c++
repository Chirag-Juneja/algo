/*
Given a Singly Linked List of size N, delete all alternate nodes of the list.

Example 1:

Input:
LinkedList: 1->2->3->4->5->6
Output: 1->3->5
Explanation: Deleting alternate nodes
results in the linked list with elements
1->3->5.
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

void deleteAlt(struct Node *head)
{
    Node *fast = head;
    Node *slow = head;
    while (fast->next != NULL)
    {
        fast = fast->next;
        fast = fast->next;
        slow->next = fast;
        slow = slow->next;
        if (fast == NULL)
        {
            break;
        }
    }
}

int main()
{
    vector<int> v = {2, 4, 6, 7, 5, 1};
    Node *head = new Node(v[0]);
    Node *current = head;
    for (int i = 1; i < v.size(); i++)
    {
        current->next = new Node(v[i]);
        current = current->next;
    }
    deleteAlt(head);
    current = head;
    while (current != NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }
    return 0;
}
