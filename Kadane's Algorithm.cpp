// Given an integer array arr[]. Find the contiguous sub-array(containing at least one number) that has the maximum sum and return its sum.
// Input: arr[] = [1, 2, 3, -2, 5]
// Output: 9
// Explanation: Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.

class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int maxi = INT_MIN;
        int sum = 0;
        for(int i = 0; i<arr.size(); i++){
            sum+= arr[i];
            maxi = max(maxi, sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
    
};
