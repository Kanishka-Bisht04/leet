class Solution {
public:
    int findGCD(vector<int>& nums) {
        int a = *min_element(nums.begin(), nums.end()); 
        int b = *max_element(nums.begin(), nums.end());
        if(b==0){
            return 0;
        }
        else{
            return gcd(b,a%b);
        }
    }
};