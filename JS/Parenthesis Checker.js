// Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
// For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).

// Note: The driver code prints "balanced" if function return true, otherwise it prints "not balanced".

// Examples :

// Input: {([])}
// Output: true
// Explanation: { ( [ ] ) }. Same colored brackets can form balanced pairs, with 0 number of unbalanced bracket.

// Input: ()
// Output: true
// Explanation: (). Same bracket can form balanced pairs,and here only 1 type of bracket is present and in balanced way.

// Input: ([]
// Output: false
// Explanation: ([]. Here square bracket is balanced but the small bracket is not balanced and Hence , the output will be unbalanced.

// Expected Time Complexity: O(|x|)
// Expected Auixilliary Space: O(|x|)

class Solution
{
    //Function to check if brackets are balanced or not.
    ispar(x)
    {
        //your code here
        // create an empty array to use as a stack for tracking the opening branckets
        let st = [];
        
        // ITerate over each character in the string 'x'
        for(let i of x){
            // If the character is an opening bracket, push it into the stack
            if(i === '{' || i === '[' || i === '('){
                st.push(i);
            } else {
                // If the stack is empty and we find a closing bracket, it's unbalanced
                if(st.length === 0) return false;
                
                // Check if the current closing bracket matches the top of the stack
                // Match {} and pop from the stack
                if( i === '}' && st[st.length - 1] === '{') st.pop();
                // Match [] and pop from the stack
                else if( i === ']' && st[st.length - 1] === '[') st.pop();
                // Match () and pop from the stack
                else if( i === ')' && st[st.length - 1] === '(') st.pop();
                // If no match,  return false (unbalanced)
                else return false;
            }
        }
        
        // If the stack is empty at the end, all brackets were balanced
        return st.length === 0;
    }
}
