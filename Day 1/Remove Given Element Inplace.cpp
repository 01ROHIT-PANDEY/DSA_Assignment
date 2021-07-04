#include<bits/stdc++.h>
using namespace std; 
 int removeElement(vector<int>& nums, int val) {
        if(nums.size()<=0){return 0;}
        int count=-1;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                count+=1;
                nums[count]=nums[i];
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
    int value;
    cin>>value;
    int size=removeElement(v,value);
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
