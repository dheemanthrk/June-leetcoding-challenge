class Solution {
public:
    int dfs(vector<vector<char>>& b,int i,int j,int n,int m)
    {
        if(i<0 || j<0 || i>=n || j>=m)
            return 0;
        if(b[i][j]=='0' || b[i][j]=='*')
            return 0;
        b[i][j]='*';
        dfs(b,i+1,j,n,m);
        dfs(b,i-1,j,n,m);
        dfs(b,i,j+1,n,m);
        dfs(b,i,j-1,n,m);
        return 1;
    }
    int numIslands(vector<vector<char>>& g) {
        
        int n=g.size();
        if(n==0)
            return 0;
        int m=g[0].size();
        int count=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(g[i][j]=='1')
                     count+=dfs(g,i,j,n,m);
            
        return count;
        
    }
};
class Solution{
public:
    int dfs(vector<vector<char>>& b, int i,int j, int n, int m)
    {
        if(i<0 || j<0 || i>=n || j >=m)
            return 0;
        if(b[i][j]=='0' || b[i][j] == '*')
            return 0;
        b[i][j] = '*';
        dfs(b,i+1,j,n,m);
        dfs(b,i-1,j,n,m);
        dfs(b,i,j+1,n,m);
        dfs(b,i,j-1,n,m);
        return 1;
    }
    int numIslands(vector<vector<char>>& g) {
        int n=g.size();
        if(n==0)
            return 0;
        int m=g[0].size;
        int count = 0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(g[i][j]=='1')
                    count+=dfs(g,i,j,n,m);
        return count;
    }
};