/*

*/

#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *one = list1;
        ListNode *two = list1;
        for (int i = 0; i <= b; i++)
        {
            two = two->next;
            if (i < a - 1)
            {
                one = one->next;
            }
        }
        one->next = list2;
        while (one->next != NULL)
        {
            one = one->next;
        }
        one->next = two;
        return list1;
    }
};