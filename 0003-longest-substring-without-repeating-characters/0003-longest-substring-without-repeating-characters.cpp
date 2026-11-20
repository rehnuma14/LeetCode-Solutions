class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int c,n =s.size(),a=0;
        
        for(int i=0;i<n;i++){
            c=0;
            vector<int>freq(256,0);
            for(int j=i;j<n;j++){
                if(freq[s[j]]==1){
                    break;
                }
                freq[s[j]]++;
                c++;
                a=max(a,c);
            }
        }
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna