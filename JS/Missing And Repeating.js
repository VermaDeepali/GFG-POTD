// Given an unsorted array arr of of positive integers. One number 'A' from set {1, 2,....,n} is missing and one number 'B' occurs twice in array. Find numbers A and B.

// Examples

// Input: arr[] = [2, 2]
// Output: 2 1
// Explanation: Repeating number is 2 and smallest positive missing number is 1.

// Input: arr[] = [1, 3, 3] 
// Output: 3 2
// Explanation: Repeating number is 3 and smallest positive missing number is 2.

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints:
// 2 ≤ n ≤ 105
// 1 ≤ arr[i] ≤ n


class Solution {
    // Function to find two repeating elements in an array of size n.
    findTwoElement(arr) {
        // your code here
        
        let duplicate, missing;
        
        // Traverse the array and mark as visited by negating the value at the index of the number
        for(let i = 0; i< arr.length; i++){
            // Converting value to index
            const index = Math.abs(arr[i])-1;
            
            if(arr[index] < 0){
                // Found the duplicate
                duplicate = Math.abs(arr[i]);
            } else {
                // Mark as visited
                arr[index] = -arr[index];
            }
        }
        
        // Find the missing number
        
        for(let i = 0;i < arr.length; i++){
            if(arr[i]>0){
                // this index was not visited
                missing = i+1
                break;
            }
        }
        
        // create an array and push the duplicate and missing values
        let res = [];
        res.push(duplicate, missing);
        
        return res;
    }
}
