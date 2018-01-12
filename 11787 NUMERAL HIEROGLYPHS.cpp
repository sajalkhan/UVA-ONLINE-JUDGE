/**----------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11787 NUMERAL HIEROGLYPHS
------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        string s;
        map<char,int>mp,value;
        map<char,int>::iterator it;
        value['B']=1;
        value['U']=10;
        value['S']=100;
        value['P']=1000;
        value['F']=10000;
        value['T']=100000;
        value['M']=1000000;
        cin>>s;
        int left=0,right=0;
        int ln=s.size();
        for(int i=0;i<ln;i++)mp[s[i]]++;
        for(int i=0;i<ln-1;i++)
        {
            if(value[s[i]]>value[s[i+1]])left++;
            if(value[s[i]]<value[s[i+1]])right++;
        }
        if((left && !right) || (!left && right) || (!left && !right))
        {
            bool flag=false;
            unsigned long long result=0;
            for(it=mp.begin();it!=mp.end();it++)
            {
                if(it->second>9)
                {
                    flag=true;
                    break;
                }
            }
            if(!flag)
            {
                for(int i=0;i<ln;i++)result+=value[s[i]];
                printf("%llu\n",result);
            }
            else printf("error\n");
        }
        else printf("error\n");
    }
    return 0;
}
