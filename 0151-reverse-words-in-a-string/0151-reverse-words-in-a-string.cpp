class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            string w="";
            while(i<n && s[i]!=' '){
                w+=s[i];
                i++;
            }
            reverse(w.begin(),w.end());
            if(w!=""){
                ans+=" "+w;
            }
        }
        return ans.substr(1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna