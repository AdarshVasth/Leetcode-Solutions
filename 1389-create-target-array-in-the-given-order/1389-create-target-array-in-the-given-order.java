
import java.util.ArrayList;

class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {
        ArrayList<Integer> target = new ArrayList<>();
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            target.add(index[i], nums[i]);
        }

        int[] result = new int[n];

        for (int i = 0; i < n; i++) {
            result[i] = target.get(i);
        }

        return result;
    }
}
