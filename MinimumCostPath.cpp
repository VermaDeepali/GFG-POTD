class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
        int n = grid.size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        vector<vector<int>> dis(n,vector<int>(n,INT_MAX));
        dis[0][0]=grid[0][0];
        pq.push({grid[0][0],{0,0}});
        int dirX[] = {-1,1,0,0};
        int dirY[] = {0,0,-1,1};
        while(pq.size()){
            auto temp = pq.top();
            pq.pop();
            int d = temp.first;
            for(int k=0;k<4;k++){
                int i = temp.second.first+dirX[k];
                int j = temp.second.second+dirY[k];
                if(i<n and j<n and i>=0 and j>=0 and d+grid[i][j]<dis[i][j]){
                    dis[i][j]=d+grid[i][j];
                    pq.push({d+grid[i][j],{i,j}});
                }
            }
        }
        return dis[n-1][n-1];
    }
};
