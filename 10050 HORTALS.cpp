/**-----------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY
    PROBLEM: UVA 10050 HORTALS
-------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d,n,m;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d",&d,&n);
        int visit[4000]={0},result=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&m);
            int count=0,count_friday=0;
            for(int i=1; i<=d; i++)
            {
                count_friday++;
                count++;
                if(count==m)
                {
                    visit[i]=1;
                    count=0;
                }
                if(count_friday==6)visit[i]=0;
                if(count_friday==7)visit[i]=0,count_friday=0;
            }
        }
        for(int i=1;i<=d;i++)if(visit[i]==1)result++;
        printf("%d\n",result);
    }
    return 0;
}
