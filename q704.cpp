
class Solution {
public:
    int search(vector<int>& nums, int target) {
       int length = nums.size();
       int upper = length - 1;
       int lower = 0;
       int mid = (upper + lower) / 2;

       int idx = -1;
       while (upper != lower) {
        if (nums[mid] == target) {
            idx = mid;
            break;
        } else if (nums[mid] < target) {
            lower = mid;
            mid += (upper - lower) / 2;
        } else {
            upper = mid;
            mid -= (upper - lower) / 2;
        }
       } 
       return idx;
    }
};