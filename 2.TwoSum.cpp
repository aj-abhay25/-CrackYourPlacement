class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int s= 0;
        int e= nums.size()-1;
        sort(nums.begin(), nums.end());
        while(s<e){
            if(nums[s]+nums[e] < target){
                s++;
            }
            else if(nums[s]+nums[e] > target){
                e--;
            }
            else{
                return {s, e};
            }
        }
        return {-1, -1};
    }
};