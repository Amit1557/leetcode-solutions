class Solution {
    public int maxNumberOfBalloons(String text) {
        int[] cnt = new int[26];

        for (int i = 0; i < text.length(); i++) {
            cnt[text.charAt(i) - 'a']++;
        }

        int ans = cnt['b' - 'a'];

        ans = Math.min(ans, cnt['a' - 'a']);
        ans = Math.min(ans, cnt['l' - 'a'] / 2);
        ans = Math.min(ans, cnt['o' - 'a'] / 2);
        ans = Math.min(ans, cnt['n' - 'a']);

        return ans;
    }
}