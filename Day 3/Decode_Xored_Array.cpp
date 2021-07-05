class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>Original;
        Original.push_back(first);
        for(int i=0;i<encoded.size();i++)
        {
            first=first^encoded[i];
            Original.push_back(first);
        }
        return Original;
    }
};


/*Rohit Pandey*/