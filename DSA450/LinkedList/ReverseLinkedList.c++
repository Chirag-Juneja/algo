/*
Given the head of a singly linked list, reverse the list, and return the reversed list.
*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

class Solution
{
public:
    struct Node *reverseList(struct Node *head)
    {
        Node *front = head;
        Node *mid = head;
        Node *back = NULL;
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        front = front->next;
        while (front != NULL)
        {
            mid->next = back;
            back = mid;
            mid = front;
            front = front->next;
        }
        mid->next = back;
        return mid;
    }
};
