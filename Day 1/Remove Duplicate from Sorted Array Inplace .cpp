#include<bits/stdc++.h>
using namespace std; 
int removeDuplicates(vector<int>& nums) {
        int count=0;
        if(nums.size()<=0){return 0;}
        for(int i=0;i<nums.size()-1;i++)
        {
            
            if(nums[i]!=nums[i+1])
            {
                count+=1;
                nums[count]=nums[i+1];
                
            }
            
        }
        return count+1;
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
    int size=removeDuplicates(v);
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
