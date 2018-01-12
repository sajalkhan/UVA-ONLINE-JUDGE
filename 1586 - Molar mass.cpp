///Md.soharub hossen
///Daffodil international university

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    map<char,double>atom;
    atom['C']=12.01;
    atom['H']=1.008;
    atom['O']=16.00;
    atom['N']=14.01;
    scanf("%d",&n);
    while(n--)
    {
        cin>>s;
        double ans=0;
        map<char,int>mp;
        map<char,int>::iterator it;
        int ln=s.size();
        for(int i=0; i<ln; i++)
        {
            char x;
            int num=0;
            if(isalpha(s[i]))x=s[i];
            if(isdigit(s[i+1]))
            {
                int j=i+1;
                while(isdigit(s[j]))
                {
                    num=num*10+s[j++]-'0';
                }
                i=j-1;
                mp[x]+=num;
            }
            if(!num)mp[x]++;
        }
        for(it=mp.begin(); it!=mp.end(); it++)ans+=atom[it->first]*it->second;
        printf("%.3lf\n",ans);
    }
    return 0;
}
