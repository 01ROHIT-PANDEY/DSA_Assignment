class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int size=nums.size(),i=0,sum=0;;
        int n1=(size*(size+1))/2;
        while(i<size)
        {
         sum+=nums[i];
         i++;
        }
        return n1-sum;
        
    }
};



























/*Rohit Pandey*/