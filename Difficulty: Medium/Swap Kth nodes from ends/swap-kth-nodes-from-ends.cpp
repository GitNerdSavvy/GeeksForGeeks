/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* swapKth(Node* head, int k) {
        // code here
        int n = 0;
        Node* ptr = head;
        while (ptr) {
        n++;
        ptr = ptr->next;
     }
        if(k>n) return head;
        if (2*k - 1 == n) return head;
        Node* slow = head;
        for (int i = 1; i < k; i++) {
            slow = slow->next;
        }
        Node* fast=head;
         for (int i = 1; i < n - k + 1; i++) {
          fast = fast->next;
        }
        int x=slow->data;
        slow->data=fast->data;
        fast->data=x;
        return head;
    }
};