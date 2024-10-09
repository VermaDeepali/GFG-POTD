// Given a Matrix mat of n*n size. Your task is constructing a 2D linked list representation of the given matrix.

// Input: mat = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
// Output: 

// Input: mat = [[23, 28], [23, 28]]
// Output:

// Expected Time Complexity: O(n2)
// Expected Space Complexity: O(n2)

// Constraints:
// 1 <= mat.size() <=15
// 1 <= mat[i][j] <=104

// function must return the pointer to the first element of the in linked list i.e. that
// should be the element at arr[0][0]
class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // code Here
        int n=mat.size();
        Node *head=NULL;
        Node* v[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v[i][j]=new Node(mat[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                Node* temp=v[i][j];
                if(i==0 && j==0) head=temp;
                if(j+1<n) temp->right=v[i][j+1];
                if(i+1<n)temp->down=v[i+1][j];
            }
        }
        return head;
    }
};
