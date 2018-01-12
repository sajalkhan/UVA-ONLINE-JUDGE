/**--------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10420 LIST OF CONQUESTS
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int n;
    string s;
}girl[22222];
bool cmp(node i,node j)
{
    return i.s.compare(j.s)<0;
}
int main()
{
    int n,j=0;
    string country,name;
    map<string,int>mp;
    map<string,int>::iterator it;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        cin>>country;
        mp[country]++;
        getline(cin,name);
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        girl[j].s=it->first;
        girl[j++].n=it->second;
    }
    sort(girl,girl+j,cmp);
    for(int i=0;i<j;i++)cout<<girl[i].s<<" "<<girl[i].n<<endl;
    return 0;
}
