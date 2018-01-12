/*--------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 821 PAGE HOPPING
---------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define mx 10000
int graph[mx][mx];
void graph_clear()
{
    for(int i=1; i<=101; i++)
    {
        for(int j=1; j<=101; j++)graph[i][j]=mx;
        graph[i][i]=0;
    }
}
int floyed_warshal(int n)
{
    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
            }
        }
    }
    int result=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(graph[i][j]!=mx)result+=graph[i][j];
        }
    }
    return result;
}
int main()
{
    int a,b,test=1;
    while(scanf("%d %d",&a,&b) && (a||b))
    {
        priority_queue<int>Q;
        set<int>st;
        graph_clear();
        graph[a][b]=1;
        st.insert(a);
        st.insert(b);
        Q.push(a);
        Q.push(b);
        while(scanf("%d %d",&a,&b) && (a||b))
        {
            graph[a][b]=1;
            st.insert(a);
            st.insert(b);
            Q.push(a);
            Q.push(b);
        }
        int ln=st.size();
        double result=floyed_warshal(Q.top());
        printf("Case %d: average length between pages = %.3lf clicks\n",test++,result/(ln*(ln-1)));
    }
    return 0;
}
