/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 12049 JUST PRUNE THE LIST
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,x,y,a,b;
    scanf("%ld",&t);
    while(t--)
    {
        map<long,int>m1,m2,m3;
        map<long,int>::iterator it1,it2;
        scanf("%ld %ld",&x,&y);
        for(int i=0;i<x;i++)
        {
            scanf("%ld",&a);
            m1[a]++;
        }
        for(int i=0;i<y;i++)
        {
            scanf("%ld",&b);
            m2[b]++;
        }
        int count=0;
        for(it1=m1.begin();it1!=m1.end();it1++)
        {
            if(!m3[it1->first])
            {
                m3[it1->first]=1;
                if(m2[it1->first])count+=abs(m1[it1->first]-m2[it1->first]);
                else count+=it1->second;
            }
        }
        for(it2=m2.begin();it2!=m2.end();it2++)
        {
            if(!m3[it2->first])
            {
                m3[it2->first]=1;
                if(m1[it2->first])count+=abs(m2[it2->first]-m1[it2->first]);
                else count+=it2->second;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
