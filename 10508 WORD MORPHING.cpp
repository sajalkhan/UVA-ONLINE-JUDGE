/*-----------------------------------
    AUTHOR: SAJAL KHAN
    PROBLEM: UVA 10508 WORD MORPHING
------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
    string name;
    int notmatch=0;
    int pos=0;
};
bool cmp(node i,node j)
{
    if(i.notmatch==j.notmatch)return i.pos<j.pos;
    return i.notmatch<j.notmatch;
}
int main()
{
    int n,m;
    while(~scanf("%d %d",&n,&m))
    {
        getchar();
        string s,result;
        cin>>s;
        node word[100000];
        result=s;
        word[0].name=s;
        word[0].pos=0;
        word[0].notmatch=0;
        for(int i=1;i<n;i++)
        {
            int count=0;
            cin>>s;
            for(int j=0;j<m;j++)if(result[j]!=s[j])count++;
            word[i].name=s;
            word[i].pos=i;
            word[i].notmatch=count;
        }
        sort(word,word+n,cmp);
        for(int i=0;i<n;i++)cout<<word[i].name<<endl;

    }
    return 0;
}
