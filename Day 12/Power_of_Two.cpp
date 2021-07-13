class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){return false;}
       
        if(n==(n&(-n)))
        {
            return true;
        }
        return false;
    }
    
};

/*Rohit Pandey*/