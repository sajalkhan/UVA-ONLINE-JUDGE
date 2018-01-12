///Md.soharub hossen
///Daffodil international university

#include<bits/stdc++.h>
using namespace std;
struct node
{
    string word;
}W[100000];
bool cmp(node i,node j)
{
    return i.word.compare(j.word)<=0;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int f,n;
    map<char,int>ck;
    ck['q']=1;
    ck['a']=1;
    ck['z']=1;
    ck['w']=2;
    ck['s']=2;
    ck['x']=2;
    ck['e']=3;
    ck['d']=3;
    ck['c']=3;
    ck['r']=4;
    ck['f']=4;
    ck['v']=4;
    ck['t']=4;
    ck['g']=4;
    ck['b']=4;
    ck[' ']=5;
    ck[' ']=6;
    ck['y']=7;
    ck['h']=7;
    ck['n']=7;
    ck['u']=7;
    ck['j']=7;
    ck['m']=7;
    ck['i']=8;
    ck['k']=8;
    ck[',']=8;
    ck['o']=9;
    ck['l']=9;
    ck['.']=9;
    ck['p']=10;
    ck[';']=10;
    ck['/']=10;
    while(scanf("%d %d",&f,&n)==2)
    {
        int x;
        string s;
        map<int,bool>mp;
        map<string,bool>np;
        for(int i=0; i<f; i++)
        {
            scanf("%d",&x);
            mp[x]=true;
        }
        int count=0,mx=0;
        for(int i=0; i<n; i++)
        {
            int b=0;
            cin>>s;
            int ln=s.size();
            for(int j=0;j<ln;j++)
            {
                if(mp[ck[s[j]]]==true)
                {
                    b=1;
                    break;
                }
            }
            if(!b)
            {
                if(mx<=ln && !np[s])
                {
                    if(mx!=ln)count=0;
                    np[s]=true;
                    mx=ln;
                    W[count++].word=s;
                }
            }
        }
        printf("%d\n",count);
        sort(W,W+count,cmp);
        for(int i=0;i<count;i++)cout<<W[i].word<<endl;
    }
    return 0;
}
