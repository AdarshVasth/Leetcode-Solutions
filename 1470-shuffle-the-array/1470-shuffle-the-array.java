
class Solution {
    public int[] shuffle(int[] nums, int n) {
        int l = nums.length / 2;

        int[] ans1 = new int[l];
        int[] ans2 = new int[l];
        int[] ans = new int[nums.length];

        for (int i = 0; i < l; i++) {
            ans1[i] = nums[i];
            ans2[i] = nums[i + l];
        }

        for (int i = 0; i < l; i++) {
            ans[2 * i] = ans1[i];
            ans[2 * i + 1] = ans2[i];
        }

        return ans;
    }
}
