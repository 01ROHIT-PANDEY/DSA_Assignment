class Solution {
public:
    bool isPowerOfFour(int n) {
/*-------------Approach:1*/
        int Count=0;
        n=n-1;
        while(n!=0)
        {   Count++;
            n=n&(n-1);
        }
        
        if(Count%2==0){return true;}
        else{return false;}



/*----------------Approach:2

	 if(n==0) return false;
        while(n%4==0){n/=4;}
        return (n==1);
*/


    }
};














/*Rohit Pandey*/