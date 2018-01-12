/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,s1;
    scanf("%d",&n);
    getchar();
    map<char,int>mp;
    map<char,int>::iterator it;
    for(int i=0; i<n; i++)
    {
        getline(cin,s);
        int ln=s.size();
        for(int j=0; j<ln; j++)
        {
            if(isalpha(s[j]))
            {
                char c=toupper(s[j]);
                mp[c]++;
            }
        }
    }
    int a[10000],j=0;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        a[j++]=it->second;
        s1+=it->first;
        stringstream ss;
        ss<<it->second;
        string s;
        ss>>s;
        s1+=s;
    }
    sort(a,a+j,greater<int>());
    for(int i=0; i<j; i++)
    {
        stringstream ss;
        string s;
        ss<<a[i];
        ss>>s;
        int p=s1.find(s);
        cout<<s1[p-1]<<" "<<a[i]<<endl;
        s1.erase(p-1,s.size()+1);
    }
    return 0;
}