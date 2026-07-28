class Solution {
public:
int digitSum(int n) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;

        for (int i = 1; i <= n; i++) {
            mp[digitSum(i)]++;
        }

        int mx = 0;
        for (auto &x : mp)
            mx = max(mx, x.second);

        int ans = 0;
        for (auto &x : mp) {
            if (x.second == mx)
                ans++;
        }

        return ans;
    }
};