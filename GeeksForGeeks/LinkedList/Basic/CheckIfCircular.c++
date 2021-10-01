/*
Given head, the head of a singly linked list, find if the linked list is circular or not. A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle. An empty linked list is considered as circular.

Example 1:

Input:
LinkedList: 1->2->3->4->5
(the first and last node is connected,
i.e. 5 --> 1)
Output: 1
*/

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

bool isCircular(Node *head)
{
    Node *itr = head;
    while (itr->next != NULL)
    {
        if (itr->next == head)
        {
            return 1;
        }
        itr = itr->next;
    }
    return 0;
}

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
    current->next = head;
    cout << isCircular(head) << endl;
}