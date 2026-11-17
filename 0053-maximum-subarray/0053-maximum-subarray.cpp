class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int CS=0, MS=INT_MIN;
        for(auto i:nums){
            CS+=i;
            MS=max(CS,MS);
            if(CS<0){
                CS=0;
            }
        }
        return MS;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna