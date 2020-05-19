class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        
        if(image[sr][sc] == newcolor)
        {
            return image;
        }
        floody(image, sr,sc,image[sr][sc],newcolor);
            return image;
    }
    
    void floody(vector<vector<int>>& image, int sr, int sc,int color, int newcolor)
    {
          
        if(sr < 0 || sc <0 ||  sc >= image[0].size() || sr >= image.size() || image[sr][sc] != color)
        {
        return;
        }
    
    image[sr][sc] = newcolor;
    floody(image, sr+1 ,sc, color, newcolor);
    floody(image, sr-1 ,sc, color, newcolor);
    floody(image, sr ,sc+1, color, newcolor);
    floody(image, sr ,sc-1, color, newcolor);

    
    }
    
    
};
