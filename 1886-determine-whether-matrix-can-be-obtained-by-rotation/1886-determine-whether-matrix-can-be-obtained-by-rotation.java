
class Solution {
    public boolean findRotation(int[][] mat, int[][] target) {
        int n = mat.length;

        for (int rotation = 0; rotation < 4; rotation++) {

            boolean same = true;

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (mat[i][j] != target[i][j]) {
                        same = false;
                        break;
                    }
                }
                if (!same) {
                    break;
                }
            }

            if (same) {
                return true;
            }

            
            int[][] rotated = new int[n][n];

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    rotated[j][n - 1 - i] = mat[i][j];
                }
            }

            mat = rotated;
        }

        return false;
    }
}
