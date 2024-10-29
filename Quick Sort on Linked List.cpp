// You are given a Linked List. Sort the given Linked List using quicksort. 

// Examples:

// Input: Linked list: 1->6->2
// Output: 1->2->6

// Explanation:
// After sorting the nodes, we have 1, 2 and 6.
// Input: Linked list: 1->9->3->8
// Output: 1->3->8->9

// Explanation:
// After sorting the nodes, we have 1, 3, 8 and 9. 
// Constraints:
// 1<= size of linked list <= 105

/* a node of the singly linked list
struct node
{
    int data;
    struct node *next;

    node(int x){
        data = x;
        next = NULL;
    }
}; */
#include<algorithm>
// Solution class with quickSort function
class Solution {
  public:
    struct Node* quickSort(struct Node* head) {
        // code here
        vector<int> arr ;
        Node* temp = head ;
        while(temp){
            arr.push_back(temp->data);
            temp = temp->next;
        }
        sort(arr.begin() , arr.end());
        temp = head ;
        for(int i =0 ; i < arr.size() ; i++){
            temp->data=arr[i];
            temp = temp->next;
        }
        return head;
    }
};
