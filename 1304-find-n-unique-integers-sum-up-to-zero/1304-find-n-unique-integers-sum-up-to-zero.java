
import java.util.ArrayList;

class Solution {
    public int[] sumZero(int n) {
        ArrayList<Integer> ans = new ArrayList<>();

        if (n % 2 != 0) {
            ans.add(0);
        }

        for (int i = 1; ans.size() < n; i++) {
            ans.add(i);
            ans.add(-i);
        }

        int[] result = new int[n];

        for (int i = 0; i < n; i++) {
            result[i] = ans.get(i);
        }

        return result;
    }
}
