// A string str is given to represent a positive number. The task is to round str to the nearest multiple of 10.  If you have two multiples equally apart from str, choose the smallest element among them.

// Examples:

// Input: str = 29 
// Output: 30
// Explanation: Close multiples are 20 and 30, and 30 is the nearest to 29. 

// Input: str = 15
// Output: 10
// Explanation: 10 and 20 are equally distant multiples from 20. The smallest of the two is 10.

// Expected Time Complexity: O(n).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= str.size()<= 105
  
class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
        int n = str.length(), s = ( str[n-1] > '5' );
        str[n-1] = '0';
        for( int i=n-2; s && i>=0; i-- ) {
            s += ( str[i]-'0' );
            str[i] = ( s % 10 + '0' );
            s = s / 10;
        }
        return s ? '1' + str : str;
    }
};
