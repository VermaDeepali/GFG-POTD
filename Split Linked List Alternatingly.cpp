// Given a singly linked list's head. Your task is to complete the function alternatingSplitList() that splits the given linked list into two smaller lists. The sublists should be made from alternating elements from the original list.
// Note: 

// The sublist should be in the order with respect to the original list.
// Your have to return an array containing the both sub-linked lists.
// Examples:

// Input: LinkedList = 0->1->0->1->0->1
// Output: 0->0->0 , 1->1->1
// Explanation: After forming two sublists of the given list as required, we have two lists as: 0->0->0 and 1->1->1.

// Input: LinkedList = 2->5->8->9->6
// Output: 2->8->6 , 5->9
// Explanation: After forming two sublists of the given list as required, we have two lists as: 2->8->6 and 5->9.

// Input: LinkedList: 7 
// Output: 7 , <empty linked list>
// Constraints:
// 1 <= number of nodes <= 100
// 1 <= node -> data <= 104
  
class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        if(head == NULL || head -> next == NULL)
        {
            return {head};
        }
        
        vector<Node*> ans;
        
        Node* prev = head;
        Node* curr = head -> next;
        
        ans.push_back(prev);
        ans.push_back(curr);
        
        while(prev && curr)
        {
            prev -> next = curr -> next;
            prev = prev -> next;
            if(curr -> next)
            {
                curr -> next = curr -> next -> next;
                curr = curr -> next;
            }
        }
        
        return ans;
    }
};