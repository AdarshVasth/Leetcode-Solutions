class Solution {
public:
    void sortColors(vector<int>& nums) {
          int count0 = 0, count1 = 0, count2 = 0;

        // Count the frequency of 0s, 1s, and 2s in the array
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) count0++;
            else if(nums[i] == 1) count1++;
            else count2++;
        }

        // Overwrite the array with the counted values
        int index = 0;

        // Fill with 0s
        while(count0--) {
            nums[index++] = 0;
        }

        // Fill with 1s
        while(count1--) {
            nums[index++] = 1;
        }

        // Fill with 2s
        while(count2--) {
            nums[index++] = 2;
        }
    }
};