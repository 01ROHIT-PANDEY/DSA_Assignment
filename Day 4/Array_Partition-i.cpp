class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sumMax=0;
        for(int i=0;i<nums.size();i+=2)
        {
            sumMax+=nums[i];
        }
        return sumMax;
    }
};
/*Rohit Pandey*/