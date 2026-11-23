class Solution {
public:
    int maxArea(vector<int>& height) {
        int mmax=0,a=0;
        int n=height.size(),m=height.size()-1,idx=0;
        for(int i=0;i<n;i++){
            int h=min(height[idx],height[m]);
            int wt=m-idx;
            a=h*wt;
            mmax=max(mmax,a);
            if(height[idx]>height[m]){
                m--;
            }else{
                idx++;
            }
        }
        return mmax;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna