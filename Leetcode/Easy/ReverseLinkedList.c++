/*
Given the head of a singly linked list, reverse the list, and return the reversed list.
*/
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *front = head;
        ListNode *mid = head;
        ListNode *back = NULL;
        if (head == NULL || head->next == NULL){
            return head;
        }
        front = front->next;
        while(front != NULL){
            mid->next = back;
            back = mid;
            mid = front;
            front = front->next;
        }
        mid->next=back;
        return mid;
    }
};