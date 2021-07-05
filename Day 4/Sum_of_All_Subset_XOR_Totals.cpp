class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int total,result=0;
        int n=nums.size();
          for(int i=0;i<(1<<n);i++)
          {
              total=0;
              for(int j=0;j<n;j++)
              {
                  if(( i& (1<<j))>0)
                  {
                      total=total ^ nums[j];
                  }
              }
              result=result+total;
          }
        return result;
    }
};
/*Rohit Pandey/*