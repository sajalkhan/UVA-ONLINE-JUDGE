/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        map<char,int>mp;
        map<char,int>::iterator it1;
        map<char,bool>mp1;
        map<char,bool>::iterator it;
        int ln=s.size();
        for(int i=0; i<ln; i++)
        {
            if(!mp1[s[i]] && isalpha(s[i]))mp1[s[i]]=true;
            if(isalpha(s[i]))mp[s[i]]++;
        }
        int n=0;
        for(it=mp1.begin(); it!=mp1.end(); it++)
        {
            if(n<mp[it->first])n=mp[it->first];
        }
        for(it1=mp.begin(); it1!=mp.end(); it1++)
        {
            if(n==mp[it1->first])cout<<it1->first;
        }
        cout<<" "<<n<<endl;
    }
    return 0;
}