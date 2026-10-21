
class Solution {
    public int[] getConcatenation(int[] nums) {
        int n = nums.length;

        int[] arr1 = new int[n];
        int[] arr2 = new int[n];
        int[] ans = new int[2 * n];

        // Copy nums into both arrays
        for (int i = 0; i < n; i++) {
            arr1[i] = nums[i];
            arr2[i] = nums[i];
        }

        // Combine both arrays into ans
        for (int i = 0; i < n; i++) {
            ans[i] = arr1[i];
            ans[i + n] = arr2[i];
        }

        return ans;
    }
}
