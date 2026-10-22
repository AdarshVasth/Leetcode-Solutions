
class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        int n = image.length;

        for (int i = 0; i < n; i++) {
            int left = 0;
            int right = image[i].length - 1;

            while (left < right) {
                int temp = image[i][left];
                image[i][left] = image[i][right];
                image[i][right] = temp;

                left++;
                right--;
            }

            for (int j = 0; j < image[i].length; j++) {
                image[i][j] = 1 - image[i][j];
            }
        }

        return image;
    }
}
