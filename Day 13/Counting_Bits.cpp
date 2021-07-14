class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>ans(n+1);
        int count=0;
        for(int i=0;i<=n;i++)
        {count=count1s(i);
         ans[i]=count;
        }
        return ans;
    }
    int count1s(uint32_t n)
    {
        int count=0;
        while(n!=0)
        {
            n=n&(n-1);
            count++;
        }
        return count;
    }
};

















/*Rohit Pandey*/