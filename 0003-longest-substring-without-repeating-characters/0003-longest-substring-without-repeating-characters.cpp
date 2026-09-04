class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> f;
        

        int low = 0;
        int ans = 0;

        for (int high = 0; high < s.size(); high++) {

            f[s[high]]++;
            int k=high-low+1;

            while (f.size() < k) {
                f[s[low]]--;

                if (f[s[low]] == 0) {
                    f.erase(s[low]);
                }
                low++;
                k=high-low+1;
            }

            // Window now has AT MOST 2 distinct fruits
            ans = max(ans, k);
        }

        return ans; 
    }
};