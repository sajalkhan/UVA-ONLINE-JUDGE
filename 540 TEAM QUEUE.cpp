/**-----------------------------
    AUTHOE : SAJAL KHAN
    PROBLEM: UVA 540 TEAM QUEUE
-------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,n,x,case_num=0;
    while(scanf("%d",&t) && t)
    {
        string s;
        vector<int>v;
        queue<int>Q[t+100];
        map<int,int>mp;
        for(int i=1; i<=t; i++)
        {
            scanf("%d",&n);
            for(int j=0; j<n; j++)
            {
                scanf("%d",&x);
                mp[x]=i;
            }
        }
        getchar();
        int x,y=0;
        printf("Scenario #%d\n",case_num+1);
        while(cin>>s && s!="STOP")
        {
            if(s=="ENQUEUE")
            {
                scanf("%d",&x);
                v.push_back(x);
                Q[mp[x]].push(x);
            }
            if(s=="DEQUEUE")
            {
                if(!y)y=mp[v[0]];
                while(!Q[y].empty())
                {
                    int D=Q[y].front();
                    Q[y].pop();
                    printf("%d\n",D);
                    for(int i=0;i<v.size();i++)
                    {
                        if(D==v[i])
                        {
                            v.erase(v.begin()+i);
                            break;
                        }
                    }
                    if(Q[y].empty())y=0;
                    break;
                }
            }
        }
        ++case_num;
        if(case_num)printf("\n");
    }
    return 0;
}
