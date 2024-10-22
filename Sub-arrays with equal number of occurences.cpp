// Given an array arr[] and two integers say, x and y, find the number of sub-arrays in which the number of occurrences of x is equal to the number of occurrences of y.

// Examples:

// Input: arr[] = [1, 2, 1] , x= 1 , y = 2
// Output: 2
// Explanation: The possible sub-arrays have same equal number of occurrences of x and y are:
// 1) [1, 2], x and y have same occurrence(1).
// 2) [2, 1], x and y have same occurrence(1).

// Input: arr[] = [1, 2, 1] , x = 4 , y = 6
// Output: 6
// Explanation: The possible sub-arrays have same equal number of occurrences of x and y are:
// 1) [1], x and y have same occurrence(0).
// 2) [2], x and y have same occurrence(0).
// 3) [1], x and y have same occurrence(0).
// 4) [1, 2], x and y have same occurrence(0).
// 5) [2, 1], x and y have same occurrence(0).
// 6) [1, 2, 1], x and y have same occurrence(0).

// Input: arr[] = [1, 2, 1] , x= 1 , y = 4
// Output: 1
// Explanation: The possible sub-array have same equal number of occurrences of x and y is: [2], x and y have same occurrence(0)

// Constraints: 
// 1 <= arr.size() <= 106
// 1 <= arr[i], x, y<=106

class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        // code here
        int n = arr.size();
        unordered_map<int, int> mp;
        int a = 0, b = 0;
        int ans = 0;
        
        mp[0] = 1;
        
        for(int i = 0; i < n; i++){
            if(arr[i] == x) a++;
            if(arr[i] == y) b++;
            
            ans += mp[a - b];
             
            mp[a - b]++; 
        }
        return ans;
    }
};
