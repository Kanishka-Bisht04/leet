/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int> s(nums.begin() , nums.end()); // remove unique element
        int index = 0;
        vector <int> temp(s.begin(), s.end()); // coz set doesnt have indexes concept
        for(int i=0 ; i<temp.size();i++){
            nums[index]=temp[i];
            index += 1 ; 
        }
        return s.size();        
    }
};
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int slow = 0;

        for(int fast = 1 ; fast <nums.size(); fast++){
            if(nums[fast] != nums[slow]){
                slow++;
                nums[slow]=nums[fast];
            }
        } 
        return slow+1;

    }
};