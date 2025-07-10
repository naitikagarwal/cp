class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size(), m = image[0].size();
        int old = image[sr][sc];

        if (old==color) return image;
        static const int DIRS[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
        queue<pair<int,int>>q;
        q.emplace(sr,sc);
        image[sr][sc] = color;
        while(!q.empty()){
            auto [r, c] = q.front(); 
            q.pop();
            for (auto& d : DIRS) {
                int nr = r + d[0], nc = c + d[1];
                if (nr >= 0 && nr < n &&
                nc >= 0 && nc < m  &&
                image[nr][nc]==old){
                    image[nr][nc] = color;
                    q.emplace(nr,nc);
                }
            }
        }
        return image;
    }
};
