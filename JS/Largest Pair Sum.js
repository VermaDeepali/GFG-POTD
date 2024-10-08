// Find the largest pair sum in an array of distinct integers.

// Examples :

// Input: arr[] = [12, 34, 10, 6, 40]
// Output: 74
// Explanation: Sum of 34 and 40 is the largest, i.e, 34 + 40 = 74.

// Input: arr[] = [10, 20, 30]
// Output: 50
// Explanation: 20 + 30 = 50.

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints:
// 2 ≤ arr.size() ≤ 106
// 0 ≤ arr[i] ≤ 106

class Solution {
    /**
    * @param number[] arr

    * @returns number
    */
    pairsum(arr) {
        // code here
       // Sort the array in ascending order
        arr.sort((a, b) => a - b);
    
        // Get the size of the array
        const n = arr.length;
    
        // Return the sum of the two largest numbers
        return arr[n - 1] + arr[n - 2];
    }
}
