
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty()) return 0;
        int n = grid.size(), m = grid[0].size();
        int islands = 0;

        static const int DIRS[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '1') {
                    ++islands;
                    queue<pair<int,int>> q;
                    q.emplace(i, j);
                    grid[i][j] = '0';  

                    while (!q.empty()) {
                        auto [r, c] = q.front(); 
                        q.pop();
                        for (auto& d : DIRS) {
                            int nr = r + d[0], nc = c + d[1];
                            if (nr >= 0 && nr < n &&
                                nc >= 0 && nc < m &&
                                grid[nr][nc] == '1') {
                                grid[nr][nc] = '0';  // mark visited
                                q.emplace(nr, nc);
                            }
                        }
                    }
                }
            }
        }
        return islands;
    }
};