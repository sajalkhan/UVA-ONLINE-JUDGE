/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
bool compare(string i,string j)
{
    return lexicographical_compare(i.begin(),i.end(),j.begin(),j.end());
}
string string_length(string s1)
{
    string len;
    int ln=s1.size();
    sort(s1.begin(),s1.end());
    for(int i=0; i<ln; i++)
    {
        if(!isspace(s1[i]))len+=s1[i];
    }
    return len;
}
int main()
{
    vector<string>v;
    map<string,string>mp;
    string s;
    int t;
    scanf("%d",&t);
    getchar();
    getchar();
    for(int k=0;k<t;k++)
    {
        mp.clear();
        v.clear();
        if(k)cout<<endl;
        while(getline(cin,s))
        {
            if(s=="")break;
            v.push_back(s);
            mp[s]=string_length(s);
        }
        sort(v.begin(),v.end(),compare);
        int ln=v.size();
        for(int i=0; i<ln; i++)
        {
            for(int j=i+1; j<ln; j++)
            {
                if(mp[v[i]]==mp[v[j]])
                {
                    cout<<v[i]<<" = "<<v[j]<<endl;
                }
            }
        }
    }
    return 0;
}