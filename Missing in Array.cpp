class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        // Your code goes here
        int sum1=n*(n+1);
        sum1=sum1/2;
        int sum2=0;
        for(int i=0;i<n-1;i++){
            sum2+=arr[i];
        }
        return sum1-sum2;
    }
};
