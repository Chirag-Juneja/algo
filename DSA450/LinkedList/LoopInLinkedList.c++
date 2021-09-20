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

class Solution
{
public:
    bool detectLoop(Node *head)
    {
        Node *fast = head;
        Node *slow = head;
        while (fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
            }
            if (fast == slow)
            {
                return true;
            }
            slow = slow->next;
        }
        return false;
    }
};
