/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        string s3;
        map<char,bool>mp;
        for(int i=0;i<s1.size();i++)
        {
            for(int j=0;j<s2.size();j++)
            {
                if(s1[i]==s2[j] && s1[i]!=' ')
                {
                    s3+=s1[i];
                    s1.erase(s1.begin()+i);
                    s2.erase(s2.begin()+j);
                    i--;
                    break;
                }
            }
        }
        sort(s3.begin(),s3.end());
        cout<<s3<<endl;
    }
    return 0;
}