// Given a singly linked list of integers. The task is to check if the given linked list is palindrome or not.

// Examples:

// Input: LinkedList: 1->2->1->1->2->1
// Output: true
// Explanation: The given linked list is 1->2->1->1->2->1 , which is a palindrome and Hence, the output is true.

// Input: LinkedList: 1->2->3->4
// Output: false
// Explanation: The given linked list is 1->2->3->4, which is not a palindrome and Hence, the output is false.

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1) 
// Note: You should not use the recursive stack space as well

// Constraints:
// 1 <= number of nodes <= 105
// 1 ≤ node->data ≤ 103

class Solution {
    // Function to check whether the list is palindrome.
    isPalindrome(head) {
        // your code here
        let values = [];
        
        // Traverse the linked list and store the values in an array
        while(head){
            values.push(head.data);
            head = head.next;
        }
        
        // create a reversed copy of the array
        let reversedValues = [...values].reverse();
        
        // Compare the original array with the reversed array
        return values.join('') === reversedValues.join('');
    }
}
