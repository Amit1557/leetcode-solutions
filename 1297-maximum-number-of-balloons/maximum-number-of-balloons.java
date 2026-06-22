class Solution {
    public int maxNumberOfBalloons(String text) {
          int[] cnt = new int[26];

        for (int i = 0; i < text.length(); i++) {
            char ch = text.charAt(i);
            cnt[ch - 'a']++;
        }

        int ans = cnt[1]; // b

        ans = Math.min(ans, cnt[0]);      // a
        ans = Math.min(ans, cnt[11] / 2); // l
        ans = Math.min(ans, cnt[14] / 2); // o
        ans = Math.min(ans, cnt[13]);     // n

        return ans;
    }
}