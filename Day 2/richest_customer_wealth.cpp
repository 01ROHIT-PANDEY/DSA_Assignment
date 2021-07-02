/*There are matrix of m*n in which customer and the bank associated with the customer is given so we have to find the those customer which having maximum amount in the banks
eg.          b1 b2 b3
      cust1:[1  2  3]sum:6
      cust2:[3  1  5]sum:9
      cust3:[7  2  1]sum:10
here rows are cust name and column are banks 
so Output would be 3
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum,max=0,i,j;
        for(i=0;i<accounts.size();i++)
        {
            sum=0;
            for(j=0;j<accounts[i].size();j++)
            {
                sum+=accounts[i][j];
            }
            if(sum>max)
            {
                max=sum;
                
            }
        }
        return max;
    }
};