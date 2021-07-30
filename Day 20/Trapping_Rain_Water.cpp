class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        if(n<3){return 0;}
        int maxLeft[n],maxRight[n];
        
        maxLeft[0]=0;
        int LMax=INT_MIN;
        for(int i=1;i<n;i++)
        {
            if(LMax<height[i-1])
            {
                LMax=height[i-1];
                maxLeft[i]=LMax;
            }
           
                maxLeft[i]=LMax;
            
        }
        maxRight[n-1]=0;
        int RMax=INT_MIN;
        for(int i=n-2;i>=0;i--)
        {
            if(RMax<height[i+1])
            {
                RMax=height[i+1];
                maxRight[i]=RMax;
            }
                maxRight[i]=RMax;
            
        }
        int trapping[n],sum=0;
      
        for(int i=1;i<n-1;i++)
        {
            if(height[i]<maxLeft[i]&&height[i]<maxRight[i])
                sum+=min(maxLeft[i],maxRight[i])-height[i];
            
            
        }
       
        
        return sum;
    }
};


/*Rohit Pandey.*/