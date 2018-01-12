/**-----------------------------------------
    MO.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY
    PROBLEM: UVA 10258 CONTEST SCOREBOARD
-------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
struct node
{
    char cr;
    int a,b,c;
    node(int x,int y,int z,char ch)
    {
        a=x;
        b=y;
        c=z;
        cr=ch;
    }
    bool operator <(const node &p)const
    {
        if(p.a==a && p.b==b)return p.c>c;
        else if(p.a==a)return p.b<b;
        else return p.a>a;
    }
};
struct result
{
    int a,b,c;
    result(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    bool operator <(const result &p)const
    {
        if(p.b==b && p.c==c)return p.a>a;
        else if(p.b==b)return p.c>c;
        else return p.b<b;
    }
};
int main()
{
    string s;
    char ch;
    int t,A,B,C;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        set<int>st;
        vector<node>v;
        vector<result>vi;
        set<int>::iterator it;
        while(getline(cin,s))
        {
            if(s.size()==0)break;
            stringstream ss;
            ss<<s;
            ss>>A>>B>>C>>ch;
            st.insert(A);
            v.push_back(node(A,B,C,ch));
        }
        sort(v.begin(),v.end());
        map<int,bool>mp;
        int b=0,N=0,P=0,S=0;
        int ln1=v.size();
        for(it=st.begin(); it!=st.end(); it++)
        {
            map<int,bool>mp1;
            map<char,bool>mp2;
            int N=0,P=0,S=0,I=0;
            for(int j=0; j<ln1; j++)
            {
                if(v[j].a==*it)
                {
                    if(!mp1[v[j].b])
                    {
                        I=0;
                        mp2.clear();
                        mp1[v[j].b]=true;
                        if(v[j].cr=='I')I++;
                        if(v[j].cr=='C')
                        {
                            S++;
                            P+=v[j].c;
                            mp2[v[j].cr]=true;
                        }
                    }
                    else if(mp1[v[j].b])
                    {
                        if(v[j].cr=='I')I++;
                        if(v[j].cr=='C' && !mp2[v[j].cr])
                        {
                            S++;
                            P+=v[j].c+(I*20);
                            mp2[v[j].cr]=true;
                        }
                    }
                }
            }
            vi.push_back(result(N=*it,S,P));
        }
        sort(vi.begin(),vi.end());
        for(int i=0; i<vi.size(); i++)
        {
            cout<<vi[i].a<<" "<<vi[i].b<<" "<<vi[i].c<<endl;
        }
        if(t)printf("\n");
    }
    return 0;
}
/*
1

1 2 10 I
3 1 11 C
1 2 19 R
1 2 21 C
1 1 25 C
*/
