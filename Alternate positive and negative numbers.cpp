// Given an unsorted array arr containing both positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.
// Note: Array should start with a positive number and 0 (zero) should be considered a positive element.

// Examples:

// Input: arr[] = [9, 4, -2, -1, 5, 0, -5, -3, 2]
// Output: 9 -2 4 -1 5 -5 0 -3 2
// Explanation: Positive elements : [9,4,5,0,2]
// Negative elements : [-2,-1,-5,-3]
// As we need to maintain the relative order of postive elements and negative elements we will pick each element from the positive and negative and will store them. If any of the positive and negative numbersare completed. we will continue with the remaining signed elements.
// The output is 9,-2,4,-1,5,-5,0,-3,2.
// Input: arr[] = [-5, -2, 5, 2, 4, 7, 1, 8, 0, -8]
// Output: 5 -5 2 -2 4 -8 7 1 8 0
// Explanation : Positive elements : [5,2,4,7,1,8,0]
// Negative elements : [-5,-2,-8]
// The output is 5, -5, 2, -2, 4, -8, 7, 1, 8, 0.
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)

class Solution {
        
    rearrange(arr) {
        // code here
        let pos = [];
        let neg = [];

        // Separate positive and negative numbers
        for (let i = 0; i < arr.length; i++) {
            if (arr[i] >= 0) {
                pos.push(arr[i]);
            } else {
                neg.push(arr[i]);
            }
        }

        let i = 0, j = 0;
        let turn = 0; // This will help to alternate between positive and negative

        // Start alternating between positive and negative numbers
        let idx = 0; // to modify the original array
        while (i < pos.length || j < neg.length) {
            if (turn % 2 === 0 && i < pos.length) {
                arr[idx++] = pos[i++]; // Modify original array in place
            } else if (j < neg.length) {
                arr[idx++] = neg[j++]; // Modify original array in place
            }
            turn++;
        }
    }
}