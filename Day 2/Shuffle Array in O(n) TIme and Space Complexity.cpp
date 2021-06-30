    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>result;
        int size=n;
        int tmp=n/2;
        for(int i=0;i<n/2;i++)
        { 
            result.push_back(nums[i]);
            if(tmp<size)
            {
                
                result.push_back(nums[tmp]);     
                tmp++;
            }  
            
            
        }
        return result;
    }

//Rohit pandey