// Given an array arr of integers. Find whether three numbers are such that the sum of two elements equals the third element.

// Example:

// Input: arr[] = [1, 2, 3, 4, 5]
// Output: true
// Explanation: The pair (1, 2) sums to 3.

// Input: arr[] = [5, 3, 4]
// Output: false
// Explanation: No triplets satisfy the condition.

// Expected Time Complexity: O(n2)
// Expected Auxilary Space: O(1)

// Constraints:
// 1 <= arr.size() <= 103
// 0 <= arr[i] <= 105

class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        // Your code
        sort(arr.begin(), arr.end());
        int n = arr.size();
        for(int i = n-1; i>=2; i--){
            int j = i-1, k = 0;
            while(k<j){
                int sum = arr[k] + arr[j];
                if(sum == arr[i]) return true;
                else if(sum>arr[i]) j--;
                else k++;
            }
        }
        return false;
    }
};
