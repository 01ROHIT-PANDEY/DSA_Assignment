class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(),strs.end());
            int sn=strs[0].length();
            string s=strs[0];
            string s1=strs[n-1];
            int c=0;
          
            for(int i=0;i<sn;i++)
            {
                if(s[i]==s1[i])
                {
                   c++;
                }
                else{
                    break;
                }
                
            }
        return strs[0].substr(0,c);
    }
};

/*Rohit Pandey*/