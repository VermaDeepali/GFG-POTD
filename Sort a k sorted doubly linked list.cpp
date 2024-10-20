// Given a doubly linked list, each node is at most k-indices away from its target position. The problem is to sort the given doubly linked list. The distance can be assumed in either of the directions (left and right).

// Examples :

// Input: Doubly Linked List : 3 <-> 2 <-> 1 <-> 5 <-> 6 <-> 4 , k = 2
// Output: 1 <-> 2 <-> 3 <-> 4 <-> 5 <-> 6
// Explanation: After sorting the given 2-sorted list is 1 <-> 2 <-> 3 <-> 4 <-> 5 <-> 6.

// Input: Doubly Linked List : 5 <-> 6 <-> 7 <-> 3 <-> 4 <-> 4 , k = 3
// Output: 3 <-> 4 <-> 4 <-> 5 <-> 6 <-> 7
// Explanation: After sorting the given 3-sorted list is 3 <-> 4 <-> 4 <-> 5 <-> 6 <-> 7.

// Expected Time Complexity: O(n*logk)
// Expected Auxiliary Space: O(k)
// Constraints:
// 1 <= number of nodes <= 105
// 1 <= k < number of nodes
// 1 <= node->data <= 109
  
class Solution {
  public:
    // function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        // code here
       priority_queue < int, vector<int>, greater<int> > minH;
        DLLNode* curr=head;
        DLLNode* prev=head;
        while(prev){
            if(minH.size()==k+1||curr==NULL){
                prev->data=minH.top();
                prev=prev->next;
                minH.pop();
            }
            else{
                minH.push(curr->data);
                curr=curr->next;
                
            }
        }
        return head;
    }
};
