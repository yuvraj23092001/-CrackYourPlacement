// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(vector<vector<char>>& grid, int row, int col){
       if(row < 0 || col < 0 || row > grid.size()-1 || col > grid[0].size()-1)
           return;
       if(grid[row][col]=='0')
           return ;
       grid[row][col] = '0';
       
       // this is for left right top down
       dfs(grid, row+1, col);
       dfs(grid, row, col+1);
       dfs(grid, row-1, col);
       dfs(grid, row, col-1);
       
       
       // this is for digonally all direction
       dfs(grid, row+1, col+1);
       dfs(grid, row+1, col-1);
       dfs(grid, row-1, col-1);
       dfs(grid, row-1, col+1);
       
   }

   
   // Function to find the number of islands.
   int numIslands(vector<vector<char>>& grid) {
       int island = 0;
       for(int row = 0; row < grid.size(); row++){
           for(int col = 0; col < grid[0].size(); col++)
           {
               if(grid[row][col]=='1')
               {
                   dfs(grid, row, col);
                   island++;
               }
           }
       }
       return island;
   }

  
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends