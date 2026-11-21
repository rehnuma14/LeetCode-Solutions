class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>f1(256,0);
        vector<int>f2(256,0);

        int n=s.size(),m=t.size();

        for(int i=0;i<n;i++){
            f1[s[i]]++;
        }
        for(int j=0;j<m;j++){
            f2[t[j]]++;
        }
        if(f1==f2){
            return true;
        }else{
            return false;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna