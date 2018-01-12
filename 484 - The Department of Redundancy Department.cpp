/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<string>v;
    map<string,int>mp;
    map<string,bool>visit;
    while(cin>>s)
    {
        if(!visit[s])
        {
            visit[s]=true;
            v.push_back(s);
        }
        mp[s]++;
        if(getchar()=='\n')break;
    }
    int size=v.size();
    for(int i=0; i<size; i++)
    {
        cout<<v[i]<<" "<<mp[v[i]]<<endl;
    }
    return 0;
}