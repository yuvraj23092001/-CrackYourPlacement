// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        queue<pair<int,int>> q;
        vector<vector<char>> ans(n,vector<char>(m,'X'));
        for(int i=0;i<m;i++){
            if(mat[0][i]=='O'){
            q.push({0,i});
                ans[0][i]='O';
                mat[0][i]='X';
            }
            if(mat[n-1][i]=='O'){
            q.push({n-1,i});
                ans[n-1][i]='O';
                mat[n-1][i]='X';
            }
        }
        for(int i=0;i<n;i++){
            if(mat[i][0]=='O'){
            q.push({i,0});
                ans[i][0]='O';
                mat[i][0]='X';
            }
            if(mat[i][m-1]=='O'){
            q.push({i,m-1});
                ans[i][m-1]='O';
                mat[i][m-1]='X';
            }
        }
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            if(i-1>=0 && mat[i-1][j]=='O'){
                ans[i-1][j]='O';
                mat[i-1][j]='X';
                q.push({i-1,j});
            }
            if(i+1<n && mat[i+1][j]=='O'){
                ans[i+1][j]='O';
                mat[i+1][j]='X';
                q.push({i+1,j});
            }
            if(j-1>=0 && mat[i][j-1]=='O'){
                ans[i][j-1]='O';
                mat[i][j-1]='X';
                q.push({i,j-1});
            }
            if(j+1<m && mat[i][j+1]=='O'){
                ans[i][j+1]='O';
                mat[i][j+1]='X';
                q.push({i,j+1});
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends