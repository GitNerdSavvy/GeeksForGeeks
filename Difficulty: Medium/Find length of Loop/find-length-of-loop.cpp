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
    int lengthOfLoop(Node *head) {
        // code here
        Node* slow=head;
        Node* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if (slow == fast) {
            int cnt = 1;
            Node* ptr = slow->next;
            while (ptr != slow) {
                cnt++;
                ptr = ptr->next;
            }
            return cnt;
          }
        }
       return 0;
    }
};