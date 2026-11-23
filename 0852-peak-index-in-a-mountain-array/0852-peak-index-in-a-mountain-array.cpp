class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int idx=0,n= arr.size(),c=0,a=0;
        for(int i=0;i<n;i++){
            if(c<arr[i]){
                c=max(c,arr[i]);
                a=i;
            }
        }
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna