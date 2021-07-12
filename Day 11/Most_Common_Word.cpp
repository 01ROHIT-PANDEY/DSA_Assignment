class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> s1(banned.begin(),banned.end());
        string str;
        int freq=INT_MIN;
        for(int i=0;i<paragraph.length();i++)
        {
            paragraph[i]=isalpha(paragraph[i])?tolower(paragraph[i]):' ';
        }
        stringstream s(paragraph);
        string s2;
        unordered_map<string,int>count;
        while(s>>s2)
        {
            if(s1.find(s2)==s1.end())
            {
                count[s2]++;
                if(freq<count[s2])
                {
                    str=s2;
                    freq=count[s2];
                    
                }
            }
        }
        return str;
        
    }
};

/*Rohit Pandey*/