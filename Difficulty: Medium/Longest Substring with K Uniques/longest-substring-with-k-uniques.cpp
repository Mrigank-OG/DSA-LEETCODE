class Solution {
public:
    int longestKSubstr(string &s, int k) {
        map<char, int> f;

        int low = 0;
        int ans = -1;

        for (int high = 0; high < s.size(); high++) {

            // Add current character
            f[s[high]]++;

            // Shrink window if distinct characters > k
            while (f.size() > k) {
                f[s[low]]--;

                if (f[s[low]] == 0) {
                    f.erase(s[low]);
                }

                low++;
            }

            // If exactly k distinct characters
            if (f.size() == k) {
                ans = max(ans, high - low + 1);
            }
        }

        return ans;
    }
};