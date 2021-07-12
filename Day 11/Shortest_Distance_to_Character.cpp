class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>v;
        int n=s.length();
        vector<int>MinDist(n);
        for(int i=0;i<n;i++)
        {
            if(s[i]==c)
            {
                v.push_back(i);
            }
        }
        vector<int>distance(v.size());
        for(int i=0;i<n;i++)
        {
            if(s[i]==c){MinDist[i]=0;}
            else{
                for(int j=0;j<v.size();j++)
                {
                    distance[j]=abs(v[j]-i);
                }
                int minimum=distance[0];
                for(int j=1;j<distance.size();j++)
                {
                    if(distance[j]<minimum)
                    {
                        minimum=distance[j];
                    }
                }
                MinDist[i]=minimum;
            }
        }
        return MinDist;
    }
};









/*Rohit Pandey*/