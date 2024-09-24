// Given two strings s and p. Find the smallest window in the string s consisting of all the characters(including duplicates) of the string p.  Return "-1" in case there is no such window present. In case there are multiple such windows of same length, return the one with the least starting index.
// Note : All characters are in Lowercase alphabets. 

// Examples:

// Input: s = "timetopractice", p = "toc"
// Output: toprac
// Explanation: "toprac" is the smallest substring in which "toc" can be found.

// Input: s = "zoomlazapzo", p = "oza"
// Output: apzo
// Explanation: "apzo" is the smallest substring in which "oza" can be found.

// Expected Time Complexity: O(|s|)
// Expected Auxiliary Space: O(n), n = len(p)

// Constraints: 
// 1 ≤ |s|, |p| ≤ 105

  

//Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        vector<int> freq(26);
        int n = s.length();
        for(auto &c:p) freq[c-'a']++;
        vector<int> tempCnt(26,0);
        int i=0,j=0;
        int ans = INT_MAX;
        int st = -1;
        auto check = [&]()->bool{
            for(int i=0;i<26;i++){
                if(freq[i]>tempCnt[i]) return false;
            }
            return true;
        };
        while(j<n){
            tempCnt[s[j]-'a']++;
            if(!check()) j++;
            else{
                while(check()){
                    if(j-i+1 < ans) {ans = j-i+1; st=i;}
                    tempCnt[s[i]-'a']--;
                    i++;
                }
                j++;
            }
        }
        return ans == INT_MAX ? "-1" : s.substr(st,ans);
    }
