class NumArray {
public:
    vector<int>summation;
    
    NumArray(vector<int>& nums) 
    {
        summation.push_back(0);
        
        for(int i=0; i < nums.size(); i++)
        {
            summation.push_back(nums[i]+summation[i]);
        }
    }
    
    int sumRange(int left, int right) 
    {
        return summation[right+1] - summation[left];
    }
};

/*
Rohit Pandey
*/