/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 12541 BIRTHDATES
*/
#include<bits/stdc++.h>
using namespace std;
struct node{
    string str;
    int a,b,c;
    node(string s,int x,int y,int z)
    {
        str=s;
        a=x;
        b=y;
        c=z;
    }
    bool operator<(const node &p)const
    {
        if(p.c==c && p.b==b)return p.a>a;
        else if(p.c==c)return p.b>b;
        else return p.c>c;
    }
};
int main()
{
    string s;
    int t,a,b,c;
    vector<node>v;
    scanf("%d",&t);
    while(t--)
    {
        cin>>s>>a>>b>>c;
        v.push_back(node(s,a,b,c));
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1].str<<endl;
    cout<<v[0].str<<endl;
    return 0;
}
