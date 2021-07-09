class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        int sum=0;
        for(int  i=0;i<n;i++)
        {
            if(findroman(s[i])<findroman(s[i+1]))
            {
               
                sum+=(findroman(s[i+1])-findroman(s[i]));
                i++;
            }
            else{
                 sum+=findroman(s[i]);
            }
        }
        return sum;
    }
    int findroman(char a)
    {
        switch(a)
        {
            case 'I':return 1;
                     break;
            case 'V':return 5;
                     break;
            case 'X':return 10;
                     break;
            case 'L':return 50;
                     break;
            case 'C':return 100;
                     break;  
            case 'D':return 500;
                     break;  
            case 'M':return 1000;
                     break; 
            default: return 0;    
                
        }
        return 0;
    }
};


/*Rohit Pandey*/