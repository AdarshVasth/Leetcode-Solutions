
class Solution {
    public List<Integer> luckyNumbers(int[][] matrix) {
        List<Integer> ans = new ArrayList<>();

        int m = matrix.length;
        int n = matrix[0].length;

        for (int i = 0; i < m; i++) {
            int minCol = 0;

            for (int j = 1; j < n; j++) {
                if (matrix[i][j] < matrix[i][minCol]) {
                    minCol = j;
                }
            }

            int value = matrix[i][minCol];
            boolean isLucky = true;

        
            for (int k = 0; k < m; k++) {
                if (matrix[k][minCol] > value) {
                    isLucky = false;
                    break;
                }
            }

            if (isLucky) {
                ans.add(value);
            }
        }

        return ans;
    }
}
