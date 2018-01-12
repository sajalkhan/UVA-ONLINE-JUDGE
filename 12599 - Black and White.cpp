/**-----------------------------------------*/
///    Author : sajal Khan
///    Daffodil International University
/**-----------------------------------------*/

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
        cin>>s;
        int ln=s.size();
        vector<int>B,W;
        int x=0,y=0;
        int count=0,b=0,w=0,m;
        if(s[0]=='B' && s[ln-1]=='W')
        {
            for(int i=0;i<ln;i++)
            {
                if(s[i]=='B' && !w)
                {
                    b=1;
                    B.push_back(i+1);
                }
                if(s[i]=='W' &&  b)
                {
                    w=1;
                    W.push_back(i+1);
                }
                if(s[i]=='B' && (b && w))
                {
                    count++;
                    b=0;
                    w=0;
                    i-=1;
                }
            }
            if(!count)
            {
                printf("1\n");
                printf("%d ",B.size()+W.size());
                for(int i=0;i<ln;i++)
                {
                    if(i==ln-1)printf("%d\n",i+1);
                    else printf("%d ",i+1);
                }
            }
            else
            {
                printf("2\n");
                printf("%d ",B.size());
                int x=B.size();
                for(int i=1;i<=x;i++)
                {
                    if(i==x)
                    {
                        printf("%d\n",B[i-1]+1);
                        m=B[i-1]+1;
                    }
                    else printf("%d ",B[i]);
                }
                int y=W.size();
                printf("%d ",y);
                printf("%d",B[0]);
                for(int i=0;i<y;i++)
                {
                    if(W[i]==m && i!=y-1)continue;
                    if(W[i]==m && i==y-1)
                    {
                        printf("\n");
                        continue;
                    }
                    if(i==y-1)printf(" %d\n",W[i]);
                    else printf(" %d",W[i]);
                }
            }
        }
        else printf("IMPOSSIBLE\n");
    }
    return 0;
}
