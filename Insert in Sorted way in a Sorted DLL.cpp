// Given a sorted doubly linked list and an element x, you need to insert the element x into the correct position in the sorted Doubly linked list(DLL).

// Note: The DLL is sorted in ascending order

// Example:

// Input: LinkedList: 3->5->8->10->12 , x = 9

// Output: 3->5->8->9->10->12

// Explanation: Here node 9 is inserted in the Doubly Linked-List.
// Input: LinkedList: 1->4->10->11 , x = 15

// Output: 1->4->10->11->15

// Constraints:
// 1 <= number of nodes <= 103
// 1 <= node -> data , x <= 104

// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        // Code here
        Node *n = new Node;
        n->data = x;
        n->prev = NULL;
        n->next = NULL;
        
        Node*pre=NULL;
        Node*curr=head;
        if(curr->data>=x)
        {
            
            n->next=curr;
            return n;
        }
        while(curr!=NULL)
        {
            if(curr->data<=x)
            {
                pre=curr;
                curr=curr->next;
            }
            else{
                break;
            }
        }
        pre->next=n;
        pre=pre->next;
        pre->next=curr;
        return head;
    }
};
