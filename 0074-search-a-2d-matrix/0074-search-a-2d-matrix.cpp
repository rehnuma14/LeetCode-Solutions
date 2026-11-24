class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(), m=matrix[0].size();
        int l=0, r=n*m-1;

        while(l<=r){
            int mid=l+(r-l)/2;

            int x=mid/m;
            int y=mid%m;

            if(matrix[x][y]==target){
                return true;
            }
            else if(matrix[x][y]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna