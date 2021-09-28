/*
from the linked list of N nodes. The task is to delete the node. Pointer/ reference to head node is not given. 
Note: No head reference is given to you. It is guaranteed that the node to be deleted is not a tail node in the linked list.

Example 1:

Input:
N = 2
value[] = {1,2}
node = 1
Output: 2
Explanation: After deleting 1 from the
linked list, we have remaining nodes
as 2.
*/

#include <bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


class Solution
{
    public:
    void deleteNode(Node *del)
    {
        del->data = del->next->data;
        del->next = del->next->next;
    }

};

int main(){

    vector<int> v = {2, 4, 6, 7, 5, 1, 0};
    Node *head = new Node(v[0]);
    Node *current = head;
    for (int i = 1; i < v.size(); i++)
    {
        current->next = new Node(v[i]);
        current = current->next;
    }
    Node *del = head->next->next;
    Solution sol = Solution();
    sol.deleteNode(del);
    while(head!=NULL){
        cout << head->data << endl;
        head = head->next;
    }

}