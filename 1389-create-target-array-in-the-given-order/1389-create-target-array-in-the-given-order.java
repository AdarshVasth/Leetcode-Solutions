
import java.util.ArrayList;

class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {
        ArrayList<Integer> target = new ArrayList<>();
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            target.add(index[i], nums[i]);
        }

        return target.stream().mapToInt(Integer::intValue).toArray();
    }
}
