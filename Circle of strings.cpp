// Given an array arr of lowercase strings, determine if the strings can be chained together to form a circle.
// A string X can be chained together with another string Y if the last character of X is the same as the first character of Y. If every string of the array can be chained with exactly two strings of the array(one with the first character and the second with the last character of the string), it will form a circle.

// For example, for the array arr[] = {"for", "geek", "rig", "kaf"} the answer will be Yes as the given strings can be chained as "for", "rig", "geek" and "kaf"

// Examples

// Input: arr[] = ["abc", "bcd", "cdf"]
// Output: 0
// Explanation: These strings can't form a circle because no string has 'd'at the starting index.

// Input: arr[] = ["ab" , "bc", "cd", "da"]
// Output: 1
// Explanation: These strings can form a circle of strings.

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)


class Solution {
  public:
    void dfs(int node, vector<int>&vis, vector<int>adj[]) {
        vis[node] = 1;
        for(auto it: adj[node])  {
            if(!vis[it]) {
                dfs(it,vis,adj);
            }
        }
    }
    int isCircle(vector<string> &arr) {
       vector<int>adj[26];
       vector<int>indeg(26,0);
       vector<int>outdeg(26,0);
       for(int i=0;i<arr.size();i++) {
           string temp = arr[i];
           int u = temp[0]-'a';
           int v = temp[temp.size()-1]-'a';
           adj[u].push_back(v);
           outdeg[u]++;
           indeg[v]++;
       }
       // check indeg & outdeg
       for(int i=0;i<26;i++) {
           if(indeg[i]!=outdeg[i]) return 0;
       }
       vector<int>vis(26,0);
       dfs(arr[0][0]-'a', vis, adj);
       // check belonging to same component or not
       for(int i=0;i<26;i++) {
           if(indeg[i] && !vis[i]) {
               return 0;
           }
       }
       return 1;
    }
};
