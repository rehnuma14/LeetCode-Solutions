class Solution {
public:
    bool isPalindrome(string s) {
        string r="";
        for(char c:s){
            if(isalnum(c)){
                r+=tolower(c);
            }
        }
        int n=r.size();
        for(int i=0;i<n;i++){
            if(r[i]!=r[n-1-i]){
                    return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna