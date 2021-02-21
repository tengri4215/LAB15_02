class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] == 0)
            {
                int j;
                for (j = i + 1; j < nums.size() && nums[j] != 0; j++)
                {
                    nums[j - 1] = nums[j];
                }
                nums[j - 1] = 0;
            }
        }
    }
};
