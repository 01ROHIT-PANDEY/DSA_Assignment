#include<bits/stdc++.h>
using namespace std; 
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]>nums[j]&&i!=j)
                {
                    count++;
                }
            }
            v.push_back(count);
            
        }
        return v;
    }
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    int val;
    for(int i=0;i<n;i++)
    {
    
    cin>>val;
    v.push_back(val);
    }
   
    vector<int>v1;
    v1=smallerNumbersThanCurrent(v);
    
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    return 0;
}
