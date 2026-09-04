class Solution {
public:
    int totalFruit(vector<int> s) {
        map<int, int> f;
        int k = 2;

        int low = 0;
        int ans = 0;

        for (int high = 0; high < s.size(); high++) {

            f[s[high]]++;

            while (f.size() > k) {
                f[s[low]]--;

                if (f[s[low]] == 0) {
                    f.erase(s[low]);
                }

                low++;
            }

            // Window now has AT MOST 2 distinct fruits
            ans = max(ans, high - low + 1);
        }

        return ans;
    }
};