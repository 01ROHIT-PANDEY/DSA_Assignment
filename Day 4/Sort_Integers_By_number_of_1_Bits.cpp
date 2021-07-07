class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>bits;
        int n=arr.size();
        pair<int,int>m[n];
        for(int i=0;i<arr.size();i++)
        {
            int num=arr[i];
            int total=0;
            while(num)
            {
                num &=(num-1);
                total+=1;
            }
          
            bits.push_back(total);
        }
        
        for(int i=0;i<arr.size();i++)
        {  m[i].first=bits[i];
           m[i].second=arr[i];
        }
        sort(m,m+n);
        for(int i=0;i<arr.size();i++)
        {
            bits[i]=m[i].second;
        }
        return bits;
    }
};

/*Rohit Pandey*/