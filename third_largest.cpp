#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();

        int largest = INT_MIN;
        int second_largest = INT_MIN;
        int third_largest = INT_MIN;

        // Find largest
        for(int i = 0; i < n; i++) {
            if(nums[i] > largest) {
                largest = nums[i];
            }
        }

        // Find second largest distinct
        for(int i = 0; i < n; i++) {
            if(nums[i] != largest && nums[i] > second_largest) {
                second_largest = nums[i];
            }
        }

        // Find third largest distinct
        for(int i = 0; i < n; i++) {
            if(nums[i] != largest &&
               nums[i] != second_largest &&
               nums[i] > third_largest) {
                third_largest = nums[i];
            }
        }

        // If third distinct maximum doesn't exist
        if(third_largest == INT_MIN) {
            return largest;
        }

        return third_largest;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3, 100,82, 1};
    cout << sol.thirdMax(nums) << endl; // Output: 1
    return 0;
}