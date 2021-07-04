   #include<bits/stdc++.h>
   using namespace std;
   
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        unordered_set<int>s;
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
        {
            s.insert(nums1[i]);
        }
        
        
        for(int i=0;i<nums2.size();i++)
        {
            if(s.find(nums2[i])!=s.end())
            {
                v.push_back(nums2[i]);
                s.erase(nums2[i]);
                }
        }
        
        return v;
        
    }
    
    int main()
    {
        int n,m;
        cin>>n>>m;
        vector<int>v1;
        vector<int>v2;
        int value,value1;
        for(int i=0;i<n;i++)
        {
            cin>>value;
            v1.push_back(value);
            
        }
         for(int i=0;i<n;i++)
        {    cin>>value1;
             v2.push_back(value1);
        }
        vector<int>result;
        result=intersection(v1,v2);
        for(int i=0;i<result.size();i++)
        {
            cout<<result[i]<<" ";
        }
        
        return 0;
        
    }