/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T=0;
    string s,s1;
    while(getline(cin,s))
    {
        int ln=s.size();
        if(T)printf("\n");
        map<char,int>mp;
        map<char,int>::iterator it;
        for(int j=0; j<ln; j++)
        {
            if(s[j]>31 && s[j]<128)
            {
                mp[s[j]]++;
            }
        }
        int a[10000],b[100000],j=0,k=0;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            a[j++]=it->second;
            b[k++]=it->first;
        }
        for(int i=0; i<j; i++)
        {
            for(int t=i+1; t<j; t++)
            {
                if(a[i]>=a[t])
                {
                    int temp1=a[i];
                    int temp2=b[i];
                    a[i]=a[t];
                    b[i]=b[t];
                    a[t]=temp1;
                    b[t]=temp2;
                }
            }
        }
        for(int i=0; i<j; i++)printf("%d %d\n",b[i],a[i]);
        T++;
    }
    return 0;
}