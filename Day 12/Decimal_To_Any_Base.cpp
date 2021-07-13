#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    int base;
    cin>>number;
    cin>>base;
    vector<int>res(50);
    int i=0;
    while(number!=0)
    {
        res[i]=number%base;
        number=number/base;
        i++;

    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<res[j];
    }

}
/*Rohit Pandey*/
