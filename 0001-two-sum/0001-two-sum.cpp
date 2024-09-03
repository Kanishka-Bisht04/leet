class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        {
          unordered_map<int, int> map;  // Use std::unordered_map instead of HashMap
                    
                for (int i = 0; i < nums.size(); i++) {
                        map[nums[i]] = i;  // Store the element and its index
                                    }
                                        
                                            for (int i = 0; i < nums.size(); i++) {
                                                    int num = nums[i];
                                                            int rem = target - num;
                                                                    if (map.find(rem) != map.end() && map[rem] != i) {  // Check if the complement exists and it's not the same element
                                                                                return vector<int>{i, map[rem]};  // Return the indices as a vector
                                                                                        }
                                                                                            }
                                                                                                
                                                                                                    return {};  // Return an empty vector if no solution is found
                                                                                                    }

        }
        
    
};