class Solution {
public:
    int singleNumber(vector<int>& nums) {
	 //Approach:1
            sort(nums.begin(),nums.end());
            int n=nums.size();
            int i;
          for( i=0;i<n-1;i++)
          {
              if(nums[i]!=nums[i+1])
              {
                  return nums[i];
              }
              i++;

          }
           return nums[n-1] ;
 /*-----------------------------------------*/      
      /*Approach:2
        int res=0,i=0;
        while(i<nums.size())
        {
            res=res^nums[i];
                i++;
        }
        return res;
        
       */


        }
   /*-----------------------------------------*/      
      /*Approach:3
       
       for(int i=0;i<nums.length;i++)
       {
         int count=0;
         for(int j=0;j<nums.length;j++)
         {
           if(nums[i]==nums[j]){count++;}
         }
       
       if(count%2!=0){return nums[i];}
       }
       return -1;

        */
             
};