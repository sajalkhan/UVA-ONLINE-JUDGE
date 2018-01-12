/*--------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 12545 - Bits Equalizer
---------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,test=1;
    string S,T;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        cin>>S;
        cin>>T;
        int count=0;
        int x1=0,x2=0,y1=0,y2=0,q=0;
        int ln1=S.size();
        for(int i=0; i<ln1; i++)
        {
            if(S[i]=='?')
            {
                q=1;
                count++;
            }
            if(S[i]=='1')x1++;
            if(T[i]=='1')y1++;
            if(S[i]=='0')x2++;
            if(T[i]=='0')y2++;
        }
        printf("Case %d: ",test++);
        if(!q)
        {
            if(x1==y1)
            {
                int not_match=0;
                for(int i=0;i<ln1;i++)if(S[i]!=T[i])not_match++;
                printf("%d\n",not_match/2);
                continue;
            }
            if(x1<y1)
            {
                int not_match=0;
                int result=y1-x1;
                for(int i=0;i<ln1;i++)
                {
                    if(T[i]=='1' && S[i]=='0')
                    {
                        S[i]='1';
                        not_match++;
                        if(not_match==result)break;
                    }
                }
                not_match=0;
                for(int i=0;i<ln1;i++)if(S[i]!=T[i])not_match++;
                printf("%d\n",result+(not_match/2));
                continue;
            }
            printf("-1\n");
        }
        if(q)
        {
            if(x1==y1)
            {
                for(int i=0;i<ln1;i++)if(S[i]=='?')S[i]='0';
                int result=0;
                for(int i=0;i<ln1;i++)if(S[i]!=T[i])result++;
                printf("%d\n",count+(result/2));
                continue;
            }
            if(x1<y1)
            {
                int Count=0;
                for(int i=0;i<ln1;i++)
                {
                    if(S[i]=='?' && x1<y1)
                    {
                        S[i]=T[i];
                        if(S[i]=='1')x1++;
                    }
                    else if(S[i]=='?')S[i]='0';
                }
                int m=y1-x1;
                for(int i=0;i<ln1;i++)
                {
                    if(S[i]=='0' && T[i]=='1' && m)
                    {
                        S[i]=T[i];
                        Count++;
                        count++;
                        if(Count==m)break;
                    }
                }
                Count=0;
                for(int i=0;i<ln1;i++)if(S[i]!=T[i])Count++;
                printf("%d\n",count+Count/2);
                continue;
            }
            printf("-1\n");
        }
    }
    return 0;
}
