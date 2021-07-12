class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>result;
        string l1="qwertyuiop";
        string l2="asdfghjkl";
        string l3="zxcvbnm";
        int arr[26]={0};
        for(int i=0;i<l1.length();i++)
        {
            arr[l1[i]-'a']=1;
        }
         for(int i=0;i<l2.length();i++)
        {
            arr[l2[i]-'a']=2;
        }
         for(int i=0;i<l3.length();i++)
        {
            arr[l3[i]-'a']=3;
        }
        for(int i=0;i<words.size();i++)
        {
            int temp=arr[tolower(words[i][0])-97];
            int flag=0;
            for(int j=1;j<words[i].size();j++)
            {
                if(temp!=arr[tolower(words[i][j])-97]){
                    flag=1;
                    break;
                }
            }
        
        if(flag==0)
        {
            result.push_back(words[i]);
        }
        }
        return result;
    }
};

/*Rohit Pandey*/