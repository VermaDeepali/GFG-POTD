// Given a string of characters, find the length of the longest proper prefix which is also a proper suffix.

// NOTE: Prefix and suffix can be overlapping but they should not be equal to the entire string.

// Examples :

// Input: str = "abab"
// Output: 2
// Explanation: "ab" is the longest proper prefix and suffix. 

// Input: str = "aaaa"
// Output: 3
// Explanation: "aaa" is the longest proper prefix and suffix. 

// Expected Time Complexity: O(|str|)
// Expected Auxiliary Space: O(|str|)

// Constraints:
// 1 ≤ |str| ≤ 106
// str contains lower case English alphabets

class Solution {
    lps(str) {
        // code here
        // Length of the input string
        let n = str.length;
        
        // i is the current char index we will be processing
        // j is the length of the current longest prefix which is also a suffix
        let i = 1, j = 0;
        
        // Array to store the length of the longest prefix which is also a suffix for each index
        let match = Array(n).fill(0);
        
        // Loop through the string from the second char to the end
        while(i < n) {
            // If the char match, increment both i and j and set match[i] to j
            if(str[i] === str[j]) {
                match[i++] = ++j;
            } else {
                // If char don't match and j is not 0, backtrack j to the prev possible match length
                if(j > 0){
                    j = match[j - 1];
                } else {
                    // If j is 0, just move to the next char
                    i++;
                }
            }
        }
        // Return the length of the longest prefix which is also the suffix for the entire string
        return match[n-1];
    }
}
