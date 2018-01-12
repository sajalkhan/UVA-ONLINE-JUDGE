/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>word;
    map<string,bool>mp;
    string s1,s2;
    getline(cin,s1);
    while(s1!="")
    {
        stringstream ss(s1);
        ss>>s1>>s2;
        mp[s2]=true;
        word[s2]=s1;
        getline(cin,s1);
    }
    while(cin>>s1)
    {
        if(!mp[s1])printf("eh\n");
        else cout<<word[s1]<<endl;
    }
    return 0;
}