// Given a single linked list, calculate the sum of the last n nodes.

// Note: It is guaranteed that n <= number of nodes.

// Examples:

// Input: Linked List: 5->9->6->3->4->10, n = 3

// Output: 17
// Explanation: The sum of the last three nodes in the linked list is 3 + 4 + 10 = 17.
// Input: Linked List: 1->2, n = 2

// Output: 3
// Explanation: The sum of the last two nodes in the linked list is 2 + 1 = 3.
// Constraints:
// 1 <= number of nodes, n <= 105
// 1 <= node->data <= 103

class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        Node *temp=head;
        int ans=0;
        while(temp){
            ans+=temp->data;
            temp=temp->next;
            if(n--<=0){
                ans-=head->data;
                head=head->next;
            }
        }
        return ans;
    }
};
