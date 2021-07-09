#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string>v;
    string ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        v.push_back(ele);
    }
    
    for(int i=0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
    }
   
  sort(v.begin(),v.end());
            int sn=v[0].length();
            string s=v[0];
            string s1=v[n-1];
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
    string newstring=v[0].substr(0,c);
    reverse(newstring.begin(),newstring.end());
    cout<<newstring;

}




