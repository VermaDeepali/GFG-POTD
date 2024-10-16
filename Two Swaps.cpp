// Given a permutation of some of the first natural numbers in an array arr[], determine if the array can be sorted in exactly two swaps. A swap can involve the same pair of indices twice.

// Return true if it is possible to sort the array with exactly two swaps, otherwise return false.

// Examples:

// Input: arr = [4, 3, 2, 1]
// Output: true
// Explanation: First, swap arr[0] and arr[3]. The array becomes [1, 3, 2, 4]. Then, swap arr[1] and arr[2]. The array becomes [1, 2, 3, 4], which is sorted.

// Input: arr = [4, 3, 1, 2]
// Output: false
// Explanation: It is not possible to sort the array with exactly two swaps.

// Constraints:
// 1 ≤ arr.size() ≤ 106
// 1 ≤ arr[i] ≤ arr.size()
  
class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        // code here.
        int cnt = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++)
        {
            while(arr[i] != i+1)
            {
                swap(arr[i], arr[arr[i]-1]);
                cnt++;
                i--;
            }
            if(cnt > 2) return false;
        }
        return cnt == 2 || cnt == 0;
    }
};
