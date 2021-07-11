class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length()){return false;}
        int Count[26]={0};
        for(int i=0;i<s.length();i++)
        {
            Count[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++)
        {
            Count[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(Count[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
};

/*Rohit Pandey*/