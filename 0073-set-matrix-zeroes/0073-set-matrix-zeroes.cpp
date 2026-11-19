class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> temp=matrix;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(temp[i][j]==0){
                    for(int x=0;x<m;x++){
                        matrix[i][x]=0;
                    }
                    for(int y=0;y<n;y++){
                        matrix[y][j]=0;
                    }
                }
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna