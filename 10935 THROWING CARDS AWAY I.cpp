/**
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10935 THROWING CARDS AWAY I
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n;
    while(scanf("%d",&n) && n)
    {
        queue<int>Q;
        int a[100],j=0;
        for(int i=1;i<=n;i++)Q.push(i);
        while(!Q.empty())
        {
            if(Q.size()==1)break;
            a[j++]=Q.front();
            Q.pop();
            int x=Q.front();
            Q.pop();
            Q.push(x);
        }
        printf("Discarded cards:");
        for(int i=0;i<j;i++)
        {
            if(i==j-1)printf(" %d",a[i]);
            else printf(" %d,",a[i]);
        }
        printf("\nRemaining card: %d\n",Q.front());

    }
    return 0;
}
