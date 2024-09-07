// Given a positive integer n. You have to find nth natural number after removing all the numbers containing the digit 9.

// Examples :

// Input: n = 8
// Output: 8
// Explanation: After removing natural numbers which contains digit 9, first 8 numbers are 1,2,3,4,5,6,7,8 and 8th number is 8.

// Input: n = 9
// Output: 10
// Explanation: After removing natural numbers which contains digit 9, first 9 numbers are 1,2,3,4,5,6,7,8,10 and 9th number is 10.

// Expected Time Complexity: O(logn)
// Expected Auxiliary Space: O(1)

// Greedy approach

// findNth(n) {
//         // code here
//         for(let i =1; i<=n ; i++){
//             let d = i%10;
//             if(d == 9){
//                 n++
//             }
//         }
//         return n
//     }

// Optimized

class Solution {
    findNth(n) {
        
        let result = 0;
        let base = 1;
        
        while (n > 0) {
            result += (n % 9) * base;
            n = Math.floor(n / 9);
            base *= 10;
        }
        
        return result;
    }
}
