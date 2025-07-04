class NumArray {
private:
    vector<int> prefix;

public:
    NumArray(vector<int>& nums) {
        prefix.push_back(0); // Start with 0 for easier calculation

        for (int i = 0; i < nums.size(); i++) {
            prefix.push_back(prefix[i] + nums[i]);
        }
    }

    int sumRange(int left, int right) {
        return prefix[right + 1] - prefix[left];
    }
};
