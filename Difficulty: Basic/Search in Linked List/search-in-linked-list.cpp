/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        // Code here
        if( head == nullptr) {
            return false;
        }
        
        if(head->data == key) {
            return true;
        }
        
        return searchKey(head->next, key);
    }
};
